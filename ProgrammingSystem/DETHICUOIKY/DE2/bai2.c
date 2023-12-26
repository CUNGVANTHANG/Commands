#include <stdio.h>

int main() {
    // Mở tệp tin "vidu.doc" để ghi (định hướng lại lối ra)
    FILE *outputFile = fopen("vidu.doc", "w");

    if (outputFile == NULL) {
        perror("Không thể mở tệp tin vidu.doc");
        return 1;
    }

    // Mở tệp tin "vd.txt" để đọc
    FILE *inputFile = fopen("vd.txt", "r");

    if (inputFile == NULL) {
        perror("Không thể mở tệp tin vd.txt");
        fclose(outputFile);
        return 1;
    }

    // Đọc dữ liệu từ "vd.txt" và ghi vào "vidu.doc"
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        fprintf(outputFile, "%s", buffer);
    }

    // Đóng tệp tin
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

