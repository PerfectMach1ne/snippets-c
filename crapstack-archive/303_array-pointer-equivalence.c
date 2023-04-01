#include <stdio.h>

int main(void) {
    int a[] = {5, 7};
    int b = 1;

    if (a[b] == *(a + b))
        printf("yes.\n");
    int c[] = {11, 22, 33, 44, 55};

    int *p = c;

    for (int i = 0; i < 5; i++)
        // Array notation with c
        printf("%d\n", c[i]);
    for (int i = 0; i < 5; i++)
        // Array notation with p
        printf("%d\n", p[i]);
    for (int i = 0; i < 5; i++)
        // Pointer notation with c
        printf("%d\n", *(c + i));
    for (int i = 0; i < 5; i++)
        // Pointer notation with p
        printf("%d\n", *(p + i));
    for (int i = 0; i < 5; i++)
        // Moving pointer p
        printf("%d\n", *(p++));
        // This won't work:
        // printf("%d\n", *(c++)); as an array variable
}
