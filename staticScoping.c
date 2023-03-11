// In C, variables are always statically scoped - therefore f() will not return the value dependent on what function called it ( g() )

#include <stdio.h>

int x = 0;

int f() {
    return x;
}

int g() {
    int x = 1;
    return f();
}

int main() {
    printf("%d", g());
    printf("\n");
    return 0;
}
