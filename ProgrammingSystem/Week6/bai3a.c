#include <stdio.h>

long long unsigned int factorial(int n) {
	if (n < 0) {
		return 0;
	} 
	long long unsigned int result = 1;
	int i;
	for (i = 0; i < n; i++) {
		result *= (i + 1);
	}
	return result;
}

int main() {
	int n;
	printf("Tinh giai thua n!\n");
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);

	long long unsigned int result = factorial(n);

	if (result == 0) {
		printf("\n-> Giai thua khong tinh cho so am\n");
	} else {
		printf("\n-> %d! = %llu\n", n, result);
	}
}