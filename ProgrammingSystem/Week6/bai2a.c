#include <stdio.h>

int main() {
	double a, b;
	printf("Tinh nghiem phuong trinh a.x + b = 0\n");
	printf("Nhap a: ");
	scanf("%lf", &a);
	printf("Nhap b: ");
	scanf("%lf", &b);
	if (a == 0) {
		if (b == 0) {
			printf("\n-> Phuong trinh vo so nghiem\n");
		}
		else {
			printf("\n-> Phuong trinh vo nghiem\n");
		}
	}
	else {
		printf("\n-> Nghiem cua phuong trinh %.2lf.x + %.2lf = 0 la x = %.2lf\n", a, b, (-b/a));	
	}
}
