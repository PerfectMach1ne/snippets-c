// Przyk³ad wywo³ania funkcji z parametrem lub parametrami:
#include<stdio.h>

int f1(int d) {
    puts("Funkcja f1; zwraca d");
    return (d);
}

float f2(int d, float f) {
    float x = d*f;
    puts("Funkcja f2; zwraca d*f");
    return (x);
}

int var1, var2;
float var3;

int main() {
    var1 = f1(4);
    var2 = 5*f1(4);
    var3 = f2(10,9.3);
    printf("%d %d %f", var1, var2, var3);

    return 0;
}
