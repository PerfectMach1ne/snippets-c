#include <stdio.h>

int main() {
    /* In C, return type of getchar(), fgetc() and getc() is int (not char).
    So it is recommended to assign the returned values of these functions to an integer type variable. */

    char ch; // May cause problems
    while ((ch = getchar()) != /*EOF*/'N') putchar(ch);

    int in; // May causen't problems
    while ((in = getchar()) != EOF) putchar(in);;

    return 0;
}
