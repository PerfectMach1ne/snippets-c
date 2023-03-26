// IMPLICIT TYPECASTING
#include <stdio.h>

int main() {
    int x = 10;
    char y = 'a';

    x = x + y; // y implicitly converted to int; ASCII a is 97

    float z = x + 1.0; // x is implicitly converted to float

    printf("x = %d\nz = %f", x, z);

    return 0;
}
