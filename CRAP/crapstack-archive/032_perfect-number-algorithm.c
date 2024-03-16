#include <stdio.h>
#include <conio.h>

void doskonala(int);

int main(int argc, char *argv[]) {
    int n;
    puts("Podaj zakres do ktorego program ma szukac liczby:");
    scanf("%d",&n);
    doskonala(n);
    getche();
    return 0;
}

void doskonala(int n) {
    int i,j,suma;
    for (i = 1; i <= n; i++) {
        printf("i = %d\n",i);
        for (j = (i-1); j > 0; j--) {
            printf("suma = %d\n",suma);
            if ((i%j) == 0) suma += j;
            printf("suma = %d\n",suma);
            printf("j = %d\n",j);
        }
        if(i == suma)
            printf("Liczba doskonala jest: %d\n",i);
        suma = 0;
    }
}
