#include <stdio.h>
#include <stdlib.h>

int main() {
    // Mở một luồng để đọc kết quả từ lệnh "echo 'Hello World!' | wc -c"
    FILE *fp = popen("echo 'Hello World!' | wc -c", "r");
    
    if (fp == NULL) {
        perror("popen");
        exit(EXIT_FAILURE);
    }

    // Đọc và hiển thị kết quả
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Kết quả: %s", buffer);
    }

    // Đóng luồng
    if (pclose(fp) == -1) {
        perror("pclose");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
