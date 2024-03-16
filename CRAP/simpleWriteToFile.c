#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fwsk;                         // Pointer to FILE
    char znak;
    fwsk = fopen("file.txt","w");       // Opening the file
    while ((znak = getche())!= '\r')    // \r - ENTER
        putc(znak,fwsk);                // Saving chars to file
    fclose(fwsk);                       // Closing the file
    getche();
    return 0;
}
