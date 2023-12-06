#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc != 3) {
		printf("Sai cu phap. Vui long nhap 2 doi so\n");
		return 1;
	}

	double a = atof(argv[1]);
	double b = atof(argv[2]);

	if (a == 0) {
		if (b == 0) {
			printf("-> Phuong trinh vo so nghiem\n");
		}
		else {
			printf("-> Phuong trinh vo nghiem\n");
		}
	}
	else {
		printf("-> Nghiem cua phuong trinh %.2lf.x + %.2lf = 0 la x = %.2lf\n", a, b, (-b/a));	
	}

	return 0;
}