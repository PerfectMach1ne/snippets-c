#include <stdio.h>

int main(void) {
    FILE *fp;
    int x = 32;

    fp = fopen("output.txt", "w");

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fprintf(stdout, "x = %d\n", x);
    fputs("HELOOOO WOOORLLLD!!!\n", fp);

    fclose(fp);
}
