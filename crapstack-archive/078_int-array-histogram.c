#include <stdio.h>
#define R 12

int main() {
    int tab[R] = {1,13,17,3,15,9,11,5,9,9,12,2};
    printf("wartosc : histogram\n");
    for (int i = 0; i < R; i++) {
        printf("%6d  ", tab[i]);
        for (int j = 0; j < tab[i]; j++) {
            printf("%c",'*');
        }
        printf("\n");
    }

    return 0;
}
