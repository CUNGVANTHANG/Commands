#include <stdio.h>

int main() {
	FILE *file1;
	FILE *file2;
	char content[1000];

	// Mo file voi che do doc
	file1 = fopen("vd.txt", "r");

	if (file1 == NULL) {
		printf("Khong the mo file");
		return 1;
	}

	// Mo file voi che do ghi tiep
	file2 = fopen("vidu.txt", "a");

	if (file2 == NULL) {
		printf("Khong the mo file");
		return 1;
	}

	while (1) {
		// Lay ky tu trong file1 vd.txt
		int character = fgetc(file1);

		// Kiem tra da lay het ky tu trong file1 vd.txt
		if (character == EOF) {
			break;
		}

		// Ghi ky tu vao file2 vidu.txt
		fputc(character, file2);
	}

	printf("Thanh cong");

	// Dong file sau khi ghi
	fclose(file1);
	fclose(file2);
	return 0;
}