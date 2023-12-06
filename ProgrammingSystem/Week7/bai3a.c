#include <stdio.h>
#include <sys/stat.h>

int main() {
	const char *file = "vd.txt";

	// Thay doi quyen cua chu so huu thanh rw-
	int result = chmod(file, S_IRUSR | S_IWUSR);

	if (result == 0) {
		printf("Thay doi quyen thanh cong\n");
	} else {
		printf("Thay doi quyen that bai\n");
	}
	return 0;
}