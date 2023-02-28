#include <stdio.h>
#include <conio.h>

int main() {
    int x;
    printf("\nPodaj liczbe: ");
    scanf("%d",&x);
    if (x<0) x = -x;
    printf("\nWartosc bezwzgledna = %d",x);
    getche();
}
