#include <stdio.h>

// Count digits, white space, others
int main() {
    int c, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (int i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while( (c = getchar()) != EOF ) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("Digits =");
    for (int i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf("\nWhite spaces = %d\nOther characters = %d\n", nwhite, nother);

    return 0;
}
