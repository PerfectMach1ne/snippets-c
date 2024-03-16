#include <stdio.h>
#include <conio.h>

int main() {
    int a,b,c,kw;
    printf("\nPodaj liczbe a, b i c: ");
    scanf("%d %d %d",&a,&b,&c);
    kw = a*a + b*b;
    if (kw == c*c)
        printf("\nTrojkat prostokatny");
    else
        printf("\nTo nie jest trojkat prostokotny");
    getche();
    return 0;
}
