#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Sử dụng: %s <tên_tệp_tin>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    struct stat file_info;

    // Sử dụng hàm stat để lấy thông tin về tệp tin
    if (stat(filename, &file_info) != 0) {
        perror("Lỗi khi lấy thông tin về tệp tin");
        return 1;
    }

    // In ra kích thước của tệp tin
    printf("Kích thước của tệp tin %s: %ld bytes\n", filename, file_info.st_size);

    // In ra thông tin quyền truy cập của tệp tin
    printf("Quyền truy cập của tệp tin %s: ", filename);
    printf((S_ISDIR(file_info.st_mode)) ? "d" : "-");
    printf((file_info.st_mode & S_IRUSR) ? "r" : "-");
    printf((file_info.st_mode & S_IWUSR) ? "w" : "-");
    printf((file_info.st_mode & S_IXUSR) ? "x" : "-");
    printf((file_info.st_mode & S_IRGRP) ? "r" : "-");
    printf((file_info.st_mode & S_IWGRP) ? "w" : "-");
    printf((file_info.st_mode & S_IXGRP) ? "x" : "-");
    printf((file_info.st_mode & S_IROTH) ? "r" : "-");
    printf((file_info.st_mode & S_IWOTH) ? "w" : "-");
    printf((file_info.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n");

    return 0;
}

