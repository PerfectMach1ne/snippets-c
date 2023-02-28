#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    // Something a
    setlocale(LC_ALL,"");
    int wzrost = 180;
    int waga = 80;
    int wzrost_kan = 181;
    int waga_kan = 79;

    if (wzrost_kan > wzrost && waga_kan < waga)
        puts("Ma potencjal!");
    else
        puts("Odradzamy...");

    getche();
    return 0;
}
