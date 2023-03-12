#include <stdio.h>

extern int myfun();
int a;

int main(void) {
    a = 2;
    printf("%d",a);
    myfun();
    printf("%d",a);

    return 0;
}
