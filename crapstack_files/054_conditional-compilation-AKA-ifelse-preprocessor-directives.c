// Preprocessors also support if-else directives which are typically used for conditional compilation.
#include <stdio.h>

#define BREAD 42

int main() {
#if BREAD >= 21
    printf("Bread!");
#endif // BREAD
    return 0;
}
