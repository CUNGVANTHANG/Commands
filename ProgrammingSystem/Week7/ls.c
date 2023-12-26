#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void listFiles(const char *path) {
    DIR *dir;
    struct dirent *entry;

    dir = opendir(path);
    if (dir == NULL) {
        perror("Không thể mở thư mục");
        exit(EXIT_FAILURE);
    }

    while ((entry = readdir(dir)) != NULL) {
        // Bỏ qua các tệp tin ẩn (bắt đầu bằng dấu chấm)
        if (entry->d_name[0] != '.') {
            printf("%s\n", entry->d_name);
        }
    }

    closedir(dir);
}

int main(int argc, char *argv[]) {
    const char *path;

    if (argc == 1) {
        // Nếu không có đối số dòng lệnh, liệt kê thư mục hiện tại
        path = ".";
    } else if (argc == 2) {
        // Nếu có một đối số dòng lệnh, liệt kê thư mục được chỉ định
        path = argv[1];
    } else {
        fprintf(stderr, "Sử dụng: %s [thư_mục]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    listFiles(path);

    return 0;
}
