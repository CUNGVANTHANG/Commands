#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char buff[256];
    int sz;

    if ((fp = fopen("vd.txt", "a")) == NULL) {
        perror("Failed to create file");
        return 1;
    }

    fputs("This is a test line", fp);
    fclose(fp);
    
    return 0;
}

