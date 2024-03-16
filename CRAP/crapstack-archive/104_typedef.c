#include <stdio.h>
#include <conio.h>

typedef unsigned long unlong;

unlong factorial(unlong);

int main() {
    for (int i = 0; i <= 12; i++) {
        printf("%2d != %ld\n",i,factorial(i));
    }
    getch();
    return 0;
}

unlong factorial(unlong num) {
    unlong w = 1;
    for (int n = num; n >= 1; n--) w *= n;
    return w;
}
