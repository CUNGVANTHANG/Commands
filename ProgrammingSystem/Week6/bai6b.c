#include <stdio.h>
#include <stdlib.h>

int sumDigits(int number) {
	if (number < 0) {
		number = -number;
	}
	
	int result = 0;

	while(number != 0) {
		result += (number % 10);
		number /= 10;
	}

	return result;
}

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		printf("Sai cu phap. Vui long nhap 1 doi so\n");
		return 1;
	}
	int number = atoi(argv[1]);

	int result = sumDigits(number);

	printf("-> Tong digits cua %d la %d\n", number, result);	
	return 0;
}