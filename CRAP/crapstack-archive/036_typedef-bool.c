// Implementing boolean values in C without the usage of stdbool.h
#include <stdio.h>

typedef enum {F,T} boolean;

int main() {
    boolean bool1, bool2, bool3, bool4;

    bool1 = F;
    if (bool1 == F)
        printf("bool1 is false\n");
    else
        printf("bool1 is true\n");

    bool2 = T;
    if (bool2 == F)
        printf("bool2 is false\n");
    else
        printf("bool2 is true\n");

    bool3 = 0;
    if (bool3 == F)
        printf("bool3 is false\n");
    else
        printf("bool3 is true\n");

    bool4 = 1;
    if (bool4 == F)
        printf("bool4 is false\n");
    else
        printf("bool4 is true\n");
    getche();
    return 0;
}
