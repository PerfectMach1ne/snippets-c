#include <stdio.h>

int main(void) {
    int *p;

    p = NULL; // this doesn't point to anything
    // How to cause something bad to happen:
    // *p = 12;
    int i = -1;
    p = &i;
    printf("%d", *p);
}
