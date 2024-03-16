#include <stdio.h>
#include <conio.h>

int main(int argc, int *argv[]) {
    float a = 2.5, b = 5.0;
    double P = a*b;
    printf("Bok a = %f\nBok b = %f\n",a,b);
    printf("Pole prostokata = %12.2lf", P);
    return 0;
}
