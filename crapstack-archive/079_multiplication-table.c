#include <stdio.h>
#define R 10

int main() {
    int T[R][R];
    int *ptrTab;
    char sp = ' ';

    puts("Tabliczka mnozenia");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < R; j++) {
            T[i][j] = (i+1)*(j+1);
            if (T[i][j] < R) {
                printf("%d%c ",T[i][j],sp);
            } else {
                printf("%d ",T[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
