#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, wynik;

    printf("\nPodaj liczbe: ");
    scanf("%d",&x);
    wynik = 3 < x && x < 5;  // Wyrazenie warunkowe
        //  3 < x < 5 jest rownowazne (3 < x ) < 5
        // Operatory w C sa laczone lewostronnie
    printf("wynik = %d",wynik);

    return 0;
}
