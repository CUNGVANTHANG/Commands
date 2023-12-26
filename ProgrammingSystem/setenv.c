#include <stdlib.h>
#include <stdio.h>

int main() {
    // Lấy giá trị của biến môi trường "MY_VARIABLE" trước khi thay đổi
    char *existingValue = getenv("MY_VARIABLE");
    printf("Giá trị của MY_VARIABLE trước khi thay đổi: %s\n", existingValue ? existingValue : "Không tồn tại");

    // Sử dụng setenv để đặt giá trị cho biến môi trường "MY_VARIABLE"
    int result = setenv("MY_VARIABLE", "NewValue", 1);

    if (result == 0) {
        printf("Giá trị của MY_VARIABLE sau khi thay đổi: %s\n", getenv("MY_VARIABLE"));
    } else {
        perror("setenv");
        return 1;
    }

    return 0;
}
