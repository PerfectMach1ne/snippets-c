/// int strcmp(const char *str1, const char *str2);
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str[20];
    puts("podaj maslo");
    gets(str);
    if (strcmp(str,"haslo")) {
        puts("zla margaryna");
    } else {
        puts("hmaslo");
    }
    getch();
    return 0;
}
