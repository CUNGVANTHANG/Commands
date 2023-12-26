#include <stdlib.h>
#include <stdio.h>

int main() {
    // Hiển thị giá trị của biến môi trường "MY_VARIABLE" trước khi thay đổi
    char* existingValue = getenv("MY_VARIABLE");
    printf("Giá trị của MY_VARIABLE trước khi thay đổi: %s\n", existingValue ? existingValue : "Không tồn tại");

    // Sử dụng putenv để đặt giá trị cho biến môi trường "MY_VARIABLE"
    putenv("MY_VARIABLE=NewValue");

    // Hiển thị giá trị của biến môi trường "MY_VARIABLE" sau khi thay đổi
    char* newValue = getenv("MY_VARIABLE");
    printf("Giá trị của MY_VARIABLE sau khi thay đổi: %s\n", newValue ? newValue : "Không tồn tại");

    return 0;
}

