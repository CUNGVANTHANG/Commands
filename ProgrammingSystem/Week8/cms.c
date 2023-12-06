#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    // Tạo thư mục "my_dir" với quyền truy cập cho chủ sở hữu (read, write, execute)
    mkdir("my_dir", S_IREAD | S_IWRITE | S_IEXEC);
    system("ls -ld my_dir");

    // Thay đổi quyền truy cập cho nhóm và người khác (read)
    chmod("my_dir", S_IREAD | S_IWRITE | S_IEXEC | S_IRGRP | S_IROTH);
    system("ls -ld my_dir");

    // Thay đổi chủ sở hữu và nhóm của thư mục
    chown("my_dir", 0, 3);
    system("ls -ld my_dir");

    return 0;
}

