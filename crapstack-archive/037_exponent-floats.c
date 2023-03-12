#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // For clrscr() alternative

int main() {
    float x,y;
//  clrscr(); Function "clrscr" (works in Turbo C++ compiler only)
    system("clear"); // It still doesn't work properly lmao
    y = 5.0e5 + 1.0; // E to eksponent, nie liczba e. 5.0e5 = 5 x 10^5
    x = y - 5.0e5;
    printf("%f\n",x);
    getche();
    return 0;
}
