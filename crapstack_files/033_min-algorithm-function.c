#include <stdio.h>
#include <conio.h>

int min(int [], int);

int main() {
    int tab[5] = {13,25,44,9,77};
    printf("min wartosc = ");
    printf("%d",min(tab,5));
    getch();
    return 0;
}

int min(int tablica[], int rozmiar) {
    int minwar, i;
    minwar = tablica[0];
    for (i = 1; i < rozmiar; i++)
        if (tablica[i] < minwar) minwar = tablica[i];
    return minwar;
}
