#include <stdio.h>

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

int main() {
	printf("Tinh tong digits cua mot so nguyen bat ki\n");
	int number;
	printf("Nhap number: ");
	scanf("%d", &number);
	int result = sumDigits(number);

	printf("\n-> Tong digits cua %d la %d\n", number, result);
}