#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

// Hàm in ra đường dẫn hiện tại
void printCurrentDirectory() {
    char cwd[PATH_MAX];

    // Lấy đường dẫn hiện tại
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current directory: %s\n", cwd);
    } else {
        perror("getcwd() error");
    }
}

int main(int argc, char *argv[]) {
    // Kiểm tra xem có đúng 1 tham số dòng lệnh không
    if (argc != 2) {
        // In ra hướng dẫn sử dụng nếu không đúng số lượng tham số
        fprintf(stderr, "Usage: %s [directory_path]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Lấy đường dẫn từ tham số dòng lệnh
    char *path = argv[1];

    // Thực hiện lệnh cd bằng cách sử dụng hàm chdir
    if (chdir(path) != 0) {
        // Nếu chdir thất bại, in ra thông báo lỗi
        perror("chdir() error");
        exit(EXIT_FAILURE);
    }

    // In ra đường dẫn hiện tại sau khi thay đổi
    printCurrentDirectory();

    return 0;
}
