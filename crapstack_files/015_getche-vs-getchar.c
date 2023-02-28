#include <stdio.h>
#include <conio.h>

int main() {
    // This simply shows the difference between getche() and getchar()
    char c = getche();
    putchar('\n');
    putchar(c);
    char c_ = getchar();
    putchar('\n');
    putchar(c_);
    getche();
    return 0;
}
