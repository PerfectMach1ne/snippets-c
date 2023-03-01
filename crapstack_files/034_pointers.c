#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int x = 13;
    int y = 33;
    int *wsk1, *wsk2;
    wsk1 = &x;
    wsk2 = &y;
    printf("\nx = %8d y = %8d",x,y);
    printf("\n&wsk1 = %8u &wsk2 = %8u",&wsk1,&wsk2);
    printf("\nwsk1 = %8u wsk2 = %8u",wsk1,wsk2);
    printf("\nHex &wsk1 = %8x Hex &wsk2 = %8x",&wsk1,&wsk2);
    getche();
    return 0;
}
