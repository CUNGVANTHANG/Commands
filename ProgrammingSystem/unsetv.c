#include <stdlib.h>
#include <stdio.h>

int main() {
    // Lấy giá trị của biến môi trường "MY_VARIABLE" trước khi xóa
    char *existingValue = getenv("MY_VARIABLE");
    printf("Giá trị của MY_VARIABLE trước khi xóa: %s\n", existingValue ? existingValue : "Không tồn tại");

    // Sử dụng unsetenv để xóa biến môi trường "MY_VARIABLE"
    int result = unsetenv("MY_VARIABLE");

    if (result == 0) {
        printf("Biến môi trường MY_VARIABLE sau khi xóa: %s\n", getenv("MY_VARIABLE") ? getenv("MY_VARIABLE") : "Không tồn tại");
    } else {
        perror("unsetenv");
        return 1;
    }

    return 0;
}

