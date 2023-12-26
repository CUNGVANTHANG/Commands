#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

void listFiles(const char *path) {
    DIR *dir;
    struct dirent *entry;
    struct stat fileStat;

    dir = opendir(path);
    if (dir == NULL) {
        perror("Không thể mở thư mục");
        return;
    }

    printf("Danh sách các tệp tin và thư mục trong %s:\n", path);

    while ((entry = readdir(dir)) != NULL) {
        char fullpath[1024];
        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);

        if (stat(fullpath, &fileStat) < 0) {
            perror("Lỗi khi lấy thông tin về tệp tin");
            closedir(dir);
            return;
        }

        printf("%s\t", entry->d_name);

        if (S_ISDIR(fileStat.st_mode)) {
            printf("(Thư mục)\n");
        } else {
            printf("(Kích thước: %ld bytes)\n", fileStat.st_size);
        }
    }

    closedir(dir);
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        // Nếu không có đối số dòng lệnh, liệt kê thư mục hiện tại
        listFiles(".");
    } else if (argc == 2) {
        // Nếu có một đối số dòng lệnh, liệt kê thư mục được chỉ định
        listFiles(argv[1]);
    } else {
        printf("Sử dụng: %s [thư_mục]\n", argv[0]);
        return 1;
    }

    return 0;
}

