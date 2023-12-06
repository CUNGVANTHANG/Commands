#include <stdio.h>
#include <sys/stat.h>

int main() {
	const char *file = "vd.txt";

	struct stat file_stat;

	if (stat(file, &file_stat) != 0) {
		printf("Khong the doc quyen cua file");
		return 1;
	}

	// Thay đổi quyền của nhóm người dùng thành "rw-" và giữ nguyên các quyền khác
    mode_t new_mode = (file_stat.st_mode & ~(S_IRGRP | S_IWGRP));

    // Sử dụng chmod để áp dụng quyền mới
    int result = chmod(file, new_mode);

	if (result == 0) {
		printf("Thay doi quyen thanh cong\n");
	} else {
		printf("Thay doi quyen that bai\n");
	}
	return 0;
}