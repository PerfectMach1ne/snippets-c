#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,delta;
    float x1,x2;

    printf("\nax^2 +bx +c , podaj a,b,c \n");
    scanf("%f %f %f",&a,&b,&c);
    delta = b*b - 4*a*c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("\nx1= %f  x2= %f",x1,x2);
    } else if (delta < 0) {
        printf("\nDelta ujemna");
    } else if (delta == 0) {
        x1 = x2 = -b/(2*a);
        printf("\nx1= %f  x2= %f",x1,x2);
        printf("\nx1 = x2 = %#f",x1);
    }

    return 0;
}
