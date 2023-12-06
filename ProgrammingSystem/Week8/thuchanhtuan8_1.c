#include <assert.h>
#include <stdio.h>
#include <string.h> // Để sử dụng strlen()

int main() {
    int a;
    char str[50];

    printf("Input the integer number: \n");
    scanf("%d", &a);
    assert(a >= 10);

    printf("The value of a is: %d\n", a);

    printf("Input a string: ");
    scanf("%49s", str); // Để tránh tràn bộ đệm, sử dụng %49s thay vì %s

    // Kiểm tra xem chuỗi có rỗng không (độ dài bằng 0)
    assert(strlen(str) > 0);

    printf("String: %s\n", str);

    return 0;
}

