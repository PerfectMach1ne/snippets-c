#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int suma, *px;
    int x[10] = {1,2,3,4,5};

    puts("Sumowanie wskaünikowe:");
    suma = 0;
    for (px = x; px < &x[10]; px++)
        suma += *px;
    printf("\nSuma = %8d",suma);

    puts("\n\nSumowanie indeksowe z dereferencjπ:");
    suma = 0;
    for (int i = 0; i < 10; i++)
        suma += *(x+i);
    printf("\nSuma = %8d",suma);
    getche();
    return 0;
}
