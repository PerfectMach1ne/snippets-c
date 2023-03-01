#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fwsk;                         // Pointer to FILE
    char znak;
    fwsk = fopen("plikplak.txt","w");   // Opening the file
    while ((znak = getche())!= '\r')    // \r - ENTER
        putc(znak,fwsk);                // Zapis do pliku
    fclose(fwsk);                       // Closing the file
    getche();
    return 0;
}
