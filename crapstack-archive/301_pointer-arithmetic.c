#include <stdio.h>

int main(void) {
    int a[5] = {11, 22, 33, 44, 55};

    int *p = &a[0]; // int *p = a;

    printf("%d\n", *p); // -> 11
    printf("%d\n", *(p + 1)); // -> 22
    printf("%d\n", *(p + 0)); // -> 11
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i)); // p[i]
    }
    printf("\n");

    int b[] = {11, 22, 33, 44, 55, 999};
    int *k = &b[0];

    while (*k != 999) {         // while the thing p points to isn't 999
        printf("%d\n", *k);     // print it
        k++;                    // move p to point to the next int!
    }
}
