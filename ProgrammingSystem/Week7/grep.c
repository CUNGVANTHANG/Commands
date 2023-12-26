#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Hàm tìm kiếm và in ra các dòng chứa pattern trong file
void grepFile(const char *pattern, const char *filename) {
    // Mở file để đọc
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];
    
    // Đọc từng dòng trong file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Kiểm tra xem dòng có chứa pattern không
        if (strstr(line, pattern) != NULL) {
            // Nếu có, in ra dòng đó
            printf("%s", line);
        }
    }

    // Đóng file sau khi sử dụng xong
    fclose(file);
}

int main(int argc, char *argv[]) {
    // Kiểm tra số lượng tham số dòng lệnh
    if (argc != 3) {
        // In ra hướng dẫn sử dụng nếu không đúng số lượng tham số
        fprintf(stderr, "Usage: %s [pattern] [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Lấy pattern và filename từ tham số dòng lệnh
    const char *pattern = argv[1];
    const char *filename = argv[2];

    // Gọi hàm grepFile để tìm kiếm và in ra kết quả
    grepFile(pattern, filename);

    return 0;
}
