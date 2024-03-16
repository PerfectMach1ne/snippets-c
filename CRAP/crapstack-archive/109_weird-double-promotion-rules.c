#include <stdio.h>

int main() {
    float x = 0.1;

    if (x == 0.1)
        printf("IF");
    else if (x == 0.1f)
        printf("ELSE IF");
    else
        printf("ELSE");

    printf("\n%d %d %d", sizeof(x), sizeof(0.1), sizeof(0.1f));

    // Note that the promotion of float to double can only cause mismatch when a value (like 0.1)
    // uses more precision bits than the bits of single precision.
    printf("\n");

    float y = 0.5;

    if (y == 0.5)
        printf("IF");
    else if (y == 0.5f)
        printf("ELSE IF");
    else
        printf("ELSE");

    printf("\nsizeof(long) = %d",sizeof(long));
    printf("\nsizeof(long long) = %d",sizeof(long long));

    return 0;
}
