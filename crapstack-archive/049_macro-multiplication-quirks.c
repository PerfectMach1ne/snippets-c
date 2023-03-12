// The macro arguments are not evaluated before macro expansion.
#include <stdio.h>
#define MULTIPLY(a,b) a*b
#define A 2+3
#define B 3+5

int main(int argc, char *argv[]) {
    // The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
    printf("%d\n", MULTIPLY(2+3, 3+5));
    printf("%d\n", MULTIPLY((2+3), (3+5)));
    printf("%d", MULTIPLY(A,B));
//  printf("%d", MULTIPLY((2+3, (3+5));     You can't do this lol
    return 0;
}
