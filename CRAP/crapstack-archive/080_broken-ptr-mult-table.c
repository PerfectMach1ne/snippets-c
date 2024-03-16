// 2023 note: seems like I tried to do here the same thing as in 079_multiplication-table.c, but with pointers.
// Well, the 2020 comment below and results printed out when this is compiled and ran speak for themselves.
// WELL LMAO
//
//
//
//
#include <stdio.h>
#define R 10

int main() {
    int T[R][R];
    int *ptrTab;
    char sp = ' ';

    puts("Tabliczka mnozenia");
    ptrTab = &T[0][0];
    for (int k = 0; k < R*R; k++) {
        if (*(ptrTab + k) < R) {
            printf("%d%c ",*(ptrTab + k),sp);
        } else {
            printf("%d ",*(ptrTab + k));
        }
        if ((k + 1) % R == 0) printf("\n");
    }

    return 0;
}
