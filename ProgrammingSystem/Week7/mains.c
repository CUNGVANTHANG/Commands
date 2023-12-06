#include <stddef.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
    int x;

	printf("argc = %d\n", argc);

	for (x = 0; x < argc; x++) {
		printf("argv[%d] = %s\n", x, argv[x]);
	} 

	for (x = 0; x < 10; x++) {
		printf("envp[%d] = %s\n", x, envp[x]);
	}

	return 0;
}
