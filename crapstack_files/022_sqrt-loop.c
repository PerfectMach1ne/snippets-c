#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int x = 0;
    while (x <= 5) {
        printf("Kwadrat liczby %4d = %d \n",x,x&x); // Well that doesn't return a "square" at all
        x++;
    }

    getche();

    float y;
    printf("\nLiczba startowa: ");
    scanf("%f",&y);
    while (y > 0) {
        printf("\nPierwiastek z liczby %8.2f = %8.2f",y,sqrt(y));
        y--;
    }
    printf("(sniper voice) the end.");
    getche();
}
