#include <stdio.h>

int main(void) {
    int row, col;

    int a[2][5] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d,%d) = %d\n", row, col, a[row][col]);
        }
    }

    int b[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", b[i][j]);
            if (j != 2)
                printf(" ");
            else
                printf("\n");
        }
    }
}
