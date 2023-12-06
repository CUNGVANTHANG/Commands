#include <stdio.h>
#include<string.h>

int main() {
	FILE *file;
	char content[1000]; // Do dai toi da cua noi dung

	// Mo file "vidu.txt" de ghi noi dung tu ban phim
	file = fopen("vidu.txt", "w");

	if (file == NULL) {
		printf("Khong the mo file\n");
		return 1;
	}

	char title[] = "Chung ta hoc ngon ngu C trong HDH Unix\n";
	printf("Nhap noi dung de ghi vao file: ");
	fgets(content, sizeof(content), stdin);

	// Ghi noi dung vao file
	fprintf(file, "%s", title);
	fprintf(file, "%s", content);

	// Dong file sau khi ghi
	fclose(file);
	return 0;
}