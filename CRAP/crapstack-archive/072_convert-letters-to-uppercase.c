// Zamiana ma³ych liter na du¿e

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int znak;

    printf("test getchar() - program konczy CTRL+Z\n");
    while ( (znak = getchar()) != EOF ) {
        if ('a' <= znak && znak <= 'z') {
            putchar(znak + 'A' - 'a');
        } else {
            putchar(znak);
        }
    }

    getch();
    return 0;
}
