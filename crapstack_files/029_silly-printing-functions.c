#include <stdio.h>
#include <conio.h>

void wzorek() {
    for (int i = 0; i < 21; i++)
        putchar('*');
}

void informacja() {
    puts("\n* POGramowanie w C *");
}

int main(int argc, char *argv[]) {
    wzorek();
    informacja();
    wzorek();
    getche();
    return 0;
}
