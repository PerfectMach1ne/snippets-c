/*
The macros with arguments should be avoided as they cause problems sometimes.
And Inline functions should be preferred as there is type checking parameter evaluation in inline functions.
From C99 onward, inline functions are supported by C language also. */

#include <stdio.h>

static inline int square(int x) { return x*x; } // Instead of #define square(x) x*x

int main(int argc, char *argv[]) {
    int x = 36/square(6);
    printf("%d", x);
    return 0;
}
