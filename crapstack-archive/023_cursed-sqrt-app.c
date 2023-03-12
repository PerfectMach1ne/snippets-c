#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"");
    float x;
    char znak = 't';
    printf("おはよう LOL"); // SPOILER : DIDN'T WORK
    printf("\nWprowadź dowolną liczbę (wprowadzenie liczby ujemnej daje błąd):");
    do {
        printf("\nLiczba: ");
        scanf("%f",&x);
        printf("\nPierwiastek z liczby %8.2f = %8.2f",x,sqrt(x));
        printf("Czy mam liczyć dalej?\nTak=t, Nie=n\n");
        znak = getche();
    } while (znak == 't');
    getch();
    return 0;
}
