#include <stdio.h>

void catFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Không thể mở tệp tin");
        return;
    }

    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        // Nếu có một đối số dòng lệnh, đọc từ tệp tin
        catFromFile(argv[1]);
    } else if (argc == 1) {
        // Nếu không có đối số dòng lệnh, đọc từ bàn phím
        int c;
        while ((c = getchar()) != EOF) {
            putchar(c);
        }
    } else {
        printf("Sử dụng: %s [tên_tệp_tin]\n", argv[0]);
        return 1;
    }

    return 0;
}

