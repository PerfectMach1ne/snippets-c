#include <stdio.h>
#include <conio.h>

int main() {
    int a = 0;
    for (int i = 0; i < 5; i++)
        printf("\n a = %d",a++);
    getche();
    int x;
    float y;
    for (x = -6; x <= 6; x = x + 2) {
        y = 2*x*x - 3*x - 4;
        printf("%4d \t \t %8.1f\n",x,y);
    }
    getche();
    return 0;
}
