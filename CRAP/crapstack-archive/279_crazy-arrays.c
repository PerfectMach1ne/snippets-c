#include <stdio.h>

#define SILVA 5

int main(void) {
    int a[10] = {0, 9, 21, [5]=7, 420, 47};

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    // First elements a[0], a[1] and a[2] are printed, so you see:
    // 0 9 21
    // But then, compiler is told 7 is to be put at the 5th place
    // ...or, worded differently, to start from the 5th place and then put 7 there
    // So, a[3] and a[4] are "zero-filled" as a result:
    // 0 0 7
    // And then the rest is printed; but only 8 values were initialized, including the
    // "automatic zeroes", while array is supposed to be of the size 10, so we have to
    // put in some extra zeros at the end too:
    // 420 47 0 0
    // and that's the magic
    printf("\n");
    int b[SILVA] = {[SILVA-3]=3, 2, 1};
    for (int i = 0; i < (int)(sizeof b / sizeof(int)); i++)
        printf("%d ", b[i]);

    printf("\n");
    // C can also compute the size of the array from the initializer:
    int c[3] = {21, 37, 8008};
    int d[] = {21, 37, 8008};
    // Both of those arrays are *set theory liker voice*, by the axiom of extensionality, equal.
}
