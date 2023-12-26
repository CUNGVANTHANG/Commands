#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int pipefd[2]; // Mảng để lưu định danh của ống (pipe)
    pid_t pid;

    // Tạo ống pipe
    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // Fork một tiến trình con
    pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // Tiến trình con

        close(pipefd[0]); // Đóng đầu đọc không sử dụng

        // Điều hướng stdout (đầu ra) sang đầu ghi của ống
        dup2(pipefd[1], STDOUT_FILENO);

        // Thực hiện lệnh "echo Hello, World!"
        execlp("echo", "echo", "Hello, World!", NULL);

        // Nếu execlp() thất bại, in ra thông báo lỗi
        perror("execlp");
        exit(EXIT_FAILURE);
    } else {
        // Tiến trình cha

        close(pipefd[1]); // Đóng đầu ghi không sử dụng

        // Chờ tiến trình con kết thúc
        wait(NULL);

        // Điều hướng stdin (đầu vào) sang đầu đọc của ống
        dup2(pipefd[0], STDIN_FILENO);

        // Thực hiện lệnh "wc -c"
        execlp("wc", "wc", "-c", NULL);

        // Nếu execlp() thất bại, in ra thông báo lỗi
        perror("execlp");
        exit(EXIT_FAILURE);
    }

    return 0;
}