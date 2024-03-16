#include <stdio.h>

int main () {
    int a = -2;
    int b = (a < 0) ? -a : a;
    // 2020 comments below
    // ?: to inaczej skompresowane if...else
    // Jest to jedyny trojargumentowy operator w C
    printf("|a| = %d\n", b);
    b = (a > 0) ? a : -a;
    printf("|a| = %d", b);
    return 0;
}
