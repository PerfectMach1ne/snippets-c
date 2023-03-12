#include <stdio.h>
#include <conio.h>

int main() {
    char znak;

    printf("Wprowadz znak z klawiatury i nacisnij Enter: ");
    znak = getc(stdin);
    printf("Znak wprowadzony to: '%c'\n",znak);

    getch();
    return 0;
}
