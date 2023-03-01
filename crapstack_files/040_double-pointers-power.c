#include <stdio.h>
#include <conio.h>
#include <math.h>

double power(double *, double *);   // Function prototype

int main() {
    double x = 5.0;
    double y = 2.0;
    printf("%8.2lf do potegi %8.2lf = %8.2lf",x,y,power(&x,&y));

    getche();
    return 0;
}

double power(double *a, double *b) {
    return pow(*a,*b);
} // The {}'s have to be at the end of a function, I tested it
