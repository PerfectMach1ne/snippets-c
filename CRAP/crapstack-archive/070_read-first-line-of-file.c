#include <stdio.h>
#include <conio.h>
#include <process.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char buffer[81];
    int i, c;

    if ((file = fopen("70_filename.extension","r")) == NULL) {
        printf("Problem with opening the file.\n");
        exit(0);
    }
    c = getc(file);
    for (i = 0; (i < 80) && (feof(file) == 0) && (c != '\n'); i++) {
        buffer[i] = c;
        c = getc(file);
    }
    buffer[i] = '\0';
    printf("Pierwsza linia pliku ... uh...: \n");
    printf("%s\n",buffer);

    getch();
    return 0;
}
