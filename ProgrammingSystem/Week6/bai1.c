#include <stdio.h>

int main() {
	printf(" n   |  n^2\n");
	printf("-----|------\n");

	for (int n = 1; n <= 10; n++) {
		int nSquare = n * n; 
		printf("%2d   | %3d\n", n, nSquare);
	}
}
