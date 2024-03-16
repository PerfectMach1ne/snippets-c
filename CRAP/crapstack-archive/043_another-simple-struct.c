#include <stdio.h>
#include <conio.h>

#define N1 40
#define N2 80

struct book {
    char autor[N1];
    char title[N2];
    int rok_wydania;
};

int main(int argc, char *argv[]) {
    struct book b1;

    puts("Podaj autora");
    gets(b1.autor);
    puts("Podaj tytul");
    gets(b1.title);
    puts("Podaj rok wydania");
    scanf("%d",&b1.rok_wydania);

    printf("\n%s, autor %s, rok %d",b1.title,b1.autor,b1.rok_wydania);

    getche();
    return 0;
}
