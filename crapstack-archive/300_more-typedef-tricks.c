#include <stdio.h>

typedef int *intptr;

int main(void) {
    int a = 10;
    intptr x = &a;

    printf("%d", *x);

    // strange array typedef
    typedef int five_ints[5];
    five_ints y = {11, 22, 33, 44, 55};
    printf("%d", y[2]);
}

typedef struct {
    int x, y;
} my_point; // lower snake case

typedef struct {
    int x, y;
} MyPoint; // CamelCase

typedef struct {
    int x, y;
} Mypoint; // Leading uppercase

typedef struct {
    int x, y;
} MY_POINT; // UPPER SNAKE CASE
