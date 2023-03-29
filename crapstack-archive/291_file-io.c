#include <stdio.h>

int main(void) {
    // both the same
    printf("Helo!!!\n");
    fprintf(stdout, "Helo!!!\n");

    FILE *fp; // Variable to represent open file

    fp = fopen("291.txt", "r"); // Open file for reading
    // fopen() returns NULL when something goes wrong

    int c = fgetc(fp); // Read a single character
    printf("%c\n", c); // Print char to stdout

    fclose(fp); // Close the file when done
}
