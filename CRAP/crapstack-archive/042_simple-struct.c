#include <stdio.h>
#include <conio.h>

struct towar {
    char nazwa_towaru[30];
    int ilosc;
    float cena;
};

int main(int argc, char *argv[]) {
    struct towar t1 = {"wiadro",420,4.20}; // :)
    struct towar t2 = {"konewka",9,21.10};
    printf("\nCena za %s = %f",t1.nazwa_towaru,t1.cena);
    printf("\nCena za %s = %f",t2.nazwa_towaru,t2.cena);
    getche();
    return 0;
}
