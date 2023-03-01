#include <stdio.h>
#include <conio.h>

int szescian(int);

int main() {
    int x;
    printf("wprowadzaj liczby, q konczy program\n");
    while (scanf("%d",&x) == 1) {
        printf("x = %d x^3 = %d\n",x,szescian(x));
    }
    getche();
    return 0;
}

int szescian(int s) {
    return s*s*s;
}
