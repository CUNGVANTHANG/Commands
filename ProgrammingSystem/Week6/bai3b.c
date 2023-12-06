#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		printf("Sai cu phap. Vui long nhap 1 doi so\n");
		return 1;
	}	

	int n = atoi(argv[1]);
	
	long long unsigned int result = factorial(n);

	if (result == 0) {
		printf("-> Giai thua khong tinh cho so am\n");
	} else {
		printf("-> %d! = %llu\n", n, result);
	}

	return 0;
}