#include <stdio.h>
#include <conio.h>

#define W 5 // Rozmiar tablicy

int main() {
    int st[W]; // Deklaracja tablicy
    for (int i = 0; i < W; i++) {
        printf("Nr %d podaj stopien: ",i+1);
        scanf("%d",&st[i]);
    }
    int max = st[0];
    for (int i = 1; i < W; i++)
        if (st[i] > max) max = st[i];
    printf("\nNajlepszy stopien to %d",max);
    getche();
    return 0;
}
