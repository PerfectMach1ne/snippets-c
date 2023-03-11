#include <stdio.h>
#define ROZ 20
#define KOL 5

int main(int argc, char *argv[]) {
    int x[ROZ];
    int suma = 0;

    for (int k = 0; k < ROZ; k++) {
        x[k] = k;
        suma += x[k];
    }
    printf("\nLista elementow");
    for (int k = 0; k < ROZ; k++) {
        printf("%c%4d", (k % KOL == 0) ? '\n' : '\xB0', x[k]);
    }
    printf("\nSuma elementow tablicy = %d",suma);

    return 0;
}
