#include <stdio.h>

int main(void) {
    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = &a[0]; // p points to the array
               // Well to the first element actually

    printf("%d\n", *p); // -> 11

    p = &a[4];
    printf("%d\n", *p); // -> 55

    // writing &a[0] in this context specifically is no different than just writing a
    p = a;
    printf("%d\n", *p); // -> 11
}
