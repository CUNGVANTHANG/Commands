#include <stdio.h>

void readLineFromFile(const char *filename, int lineNumber) {
    FILE *file = fopen(filename, "r"); // Mở file để đọc

    if (file == NULL) {
        printf("Khong the mo file %s\n", filename);
        return;
    }

    char buffer[1000];
    int currentLine = 0;

    while (currentLine < lineNumber) {
        if (fgets(buffer, sizeof(buffer), file) == NULL) {
            printf("Khong du dong de doc\n");
            fclose(file);
            return;
        }
        currentLine++;
    }

    // In nội dung của dòng thứ lineNumber
    printf("Noi dung dong thu %d: %s", lineNumber, buffer);

    // Đóng file sau khi đọc
    fclose(file);
}

int main() {
    const char *filename = "vd.txt";
    int lineNumber = 4;

    readLineFromFile(filename, lineNumber);

    return 0;
}