#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimalToBinary(int n) {
	if (n == 0) {
		printf("0\n");
	}

	int binary[32];
	int i = 0;
	
	while (n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	int j;
	for (j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Sai cu phap. Vui long nhap 2 doi so\n");
        return 1;
    }

    char *options = argv[1];

    int number = atoi(argv[2]);

    if (strcmp(options, "#2") == 0) {
        printf("%d -> ", number);
        decimalToBinary(number);
    } else if (strcmp(options, "#8") == 0) {
        printf("%d -> %o\n", number, number);
    } else if (strcmp(options, "#16") == 0) {
        printf("%d -> %x\n", number, number);
    } else {
        printf("Nhap options la: #2, #8, #16\n");
    }

    return 0;
}
