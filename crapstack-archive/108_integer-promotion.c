// INTEGER PROMOTION
//
// No arithmetic calculation happens on smaller types like char, short and enum.
// They are first converted to int or unsigned int, and then arithmetic is done on them.
//
#include <stdio.h>

int main() {
    char a = 30, b = 40, c = 10;
    char d = (a*b)/c; // Arithmetic overflow doesn't happen thanks to integer promotion
    printf("%d", d);
    printf("\n%c", d);

    {
        char a = 0xfb;          // Becomes int = -5
        unsigned char b = 0xfb; // Becomes int = 251
        printf("\na = %c", a);
        printf("\nb = %c", b);

        if (a == b) printf("\nSame");
        else printf("\nNot same");  // And so it prints this, despite the characters being clearly the same.

        // See - this:
        printf("\na = %d", a);
        printf("\nb = %d", b);
    }

    return 0;
}
