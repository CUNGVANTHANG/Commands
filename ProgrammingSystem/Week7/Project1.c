#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#define MAX_LINE 80 /* The maximum length command */

typedef struct LinkedList {
	char *command;
	struct LinkedList *next;
	struct LinkedList *prev;
} LinkedList;

int main(void)
{
	char *args[MAX_LINE/2 + 1]; /* command line arguments */
	int should_run = 1; /* flag to determine when to exit program */
	LinkedList *history = (LinkedList *) malloc (sizeof(LinkedList));
	LinkedList *head = history;
	int historyIndex = 0;
	char *ipStr;
	while (should_run) {
		printf("osh>");
		for (int i = 0; i < MAX_LINE/2 + 1; i ++) args[i] = NULL;
		// Read user input
		fflush(stdin);
		ipStr = (char *) malloc (100 * sizeof(char));
		fgets(ipStr, 100, stdin);
		ipStr[strlen(ipStr) - 1] = '\0';

		// Storing that input into history array
		history->command = (char *) malloc (100 * sizeof(char));
		strcpy(history->command, ipStr);

		// If members in history array are over 10, remove the oldest one
		if (historyIndex >= 10) {
			LinkedList *tmp = head->next;
			free(head);
			head = tmp;
		}

		// Checking if input is "history", since real shell won't understand what "history" command is.
		if (strcmp(ipStr, "history") == 0) {
			int index2 = historyIndex;
			LinkedList *historyTemp = history;
			while (index2 > historyIndex - 10 && index2 > -1) {
					printf("%d %s\n", index2 + 1, historyTemp->command);
					historyTemp = historyTemp->prev;
					index2 --;
			}
			free(ipStr);
			printf("\n");
		}

		else if (strcmp(ipStr, "exit") == 0) {
			free(ipStr);
			while (head != NULL) {
				LinkedList *tmp = head->next;
				free(head->command);
				free(head);
				head = tmp;
			}
			should_run = 0;
			continue;
		}
		
		// If not, just handle the input normally and put it in execvp()
		else {
			// Here we do some code to split the ipStr into tokens to put into args.
			int argsIndex = 0;
			char *token = strtok(ipStr, " ");
			while (token != NULL && argsIndex < MAX_LINE/2 + 1) {
				args[argsIndex] = (char *) malloc (100 * (sizeof(char)));
				strcpy(args[argsIndex], token);
				token = strtok(NULL, " ");
				argsIndex ++;
			}

			// This is required for the execvp, "command" pointer specifically needs to point to the same address args[0] is pointing to
			char *command = args[0];

			if (fork() == 0) {
				// Newly spawned child process.
				int status_code = execvp(command, args);

				if (status_code == -1) {
					printf("Command entered incorrectly. Try again.\n");
					return 1;
				}
			}
			else {
				// Parent process.

				// Parent will invoke wait, unless command includes &
				if (args[argsIndex - 1] != "&")
					wait(NULL);

				// Deallocating args	
				int argsIndexMinor = 0;
				while (argsIndexMinor < argsIndex) {
					free(args[argsIndexMinor]);
					argsIndexMinor ++;
				}

				// Deallocating user input
				free(ipStr);
			}
		}
		history->next = (LinkedList *) malloc (sizeof(LinkedList));
		LinkedList *temp = history;
		history = history->next;
		history->prev = temp;
		historyIndex ++;
	}	
	return 0;
}
