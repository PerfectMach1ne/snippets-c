d#include <stdio.h>
#include <conio.h>

int main() {
    int znak;
//  clrscr();   "WORKS IN TURBO C++ COMPILER ONLY" GOT DAMIT

    printf("dopoki nie nacisniesz Enter, beda  wprowadzane znaki (tak, to jest  grozba)");
    printf("\nwprowadz znak z klawiatury : ");
    while ( (znak = getchar()) != '\n' ) printf("%c",znak);

    getch();
    return 0;
}
