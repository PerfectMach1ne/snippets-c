#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 2147483647; // Prolly the int limit
    printf("%d\n", x); // 2147483647
    x++;
    printf("%d\n", x); // -2147483648
    x--;
    int scuff = x*x; // 1
    printf("%d", scuff);
}
