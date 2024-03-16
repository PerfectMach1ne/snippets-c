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
    if (num <= 1) return 1;
    else return num * factorial(num - 1);
}
