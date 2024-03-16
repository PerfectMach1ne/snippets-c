#include <stdio.h>

int main() {
    unsigned short test0 = 65535;
    short int test3 = 4;
    short test4 = 32767 - 65536 + 1;
    signed int test1 = 2;
    long int test2 = 2;

    printf("%zu %zu",sizeof(test1),sizeof(test2));
    printf("\n%hd %hu %hd",test3, test0, test4);

    return 0;
}
