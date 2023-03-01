#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float x;

    printf("Wprowadzaj liczby, q konczy program\n");
    while (scanf("%f",&x) == 1) {
        printf("x = %f\nsqrt(x) = %f\n",x,sqrt(x));
    }
    getche();
    return 0;
}
