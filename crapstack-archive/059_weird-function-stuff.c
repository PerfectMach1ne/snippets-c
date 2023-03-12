#include <stdio.h>

int f1() {
    puts("Jestem funkcja f1(), zwracam wartosc 5.");
    return (5);
}

int variable_1, variable_2;

int main() {
    variable_1 = f1();
    variable_2 = 5*f1();
    return 0;
}
