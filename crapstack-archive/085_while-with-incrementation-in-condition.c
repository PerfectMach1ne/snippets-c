#include <stdio.h>

int main(int argc, char *argv[]) {
    int liczba, kwadrat;
/*  liczba = 1;
    while (liczba < 11) {
        kwadrat = liczba*liczba;
        printf("\nkwadrat liczby %3d = %4d",liczba, kwadrat);
        liczba = liczba + 1;
    } */// 2020: Inefficient way of writing while loops (apparently) instead, you can do this:
    liczba = 0; // 2020: Needs to be 0 as it gets incremented in the 'while' loop condition
    while (liczba++ < 11) { // 2023: It still prints out 11 and the result for it, meaning it increments the value after the loop condition check.
        kwadrat = liczba*liczba;
        printf("\nkwadrat liczby %3d = %4d",liczba, kwadrat);
    }
}
