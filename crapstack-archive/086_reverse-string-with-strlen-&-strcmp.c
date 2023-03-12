#include <stdio.h>
#include <string.h>

int main() {

int i,j;
    char pog[100] = "program";
    char gop[100];
    char str[20];

    // 2023: part 1, reverse a string/char array with strlen
    for (i = strlen(pog) - 1, j = 0; i >= 0; i--, j++) gop[i] = pog[j];
    printf("%s %s",pog,gop);

    // 2023: part 2, simple string compare for a silly "enter password" with 3 tries use case
    for (i = 0; i < 3 && strcmp(str, "burger"); i++) {
        printf("Podaj haslo: ");
        gets(str);
    }

    return 0;
}
