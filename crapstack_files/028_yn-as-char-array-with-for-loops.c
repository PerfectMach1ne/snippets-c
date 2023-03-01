#include <stdio.h>
#include <conio.h>

#define R 100

int main () {
    int i;
    char c, array[R];
    printf("\nHelooo, what's your name?");
    for (i = 0; (c = getchar()) != '\n'; i++)
        array[i] = c;
    array[i] = '\0';
    printf("\nAsbbdsjfnd ");
    for (int i = 0; array[i] != '\0'; i++)
        putchar(array[i]);
    getchar();
    return 0;
}
