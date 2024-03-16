#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *buf1 = "aaa", *buf2 = "bbb", *buf3 = "ccc";
    int ptr;

    ptr = strcmp(buf2, buf1);
    printf("%d\n", ptr);
    if (ptr > 0) {
        printf("buffer 2 is greater than buffer 1\n");
    } else {
        printf("buffer 2 is lesser than buffer 1\n");
    }

    ptr = strcmp(buf2, buf3);
    printf("%d\n", ptr);
    if (ptr > 0) {
        printf("buffer 2 is greater than buffer 3\n");
    } else {
        printf("buffer 2 is lesser than buffer 3\n");
    }

    // To understand what this point this program is trying to make, see "return value" @
    // https://cplusplus.com/reference/cstring/strcmp/

    return 0;
}
