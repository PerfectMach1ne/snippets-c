#include <stdio.h>

int main(void) {
    FILE *fp;
    char s[1024]; // big enough
    int linecount = 0;

    fp = fopen("291.txt", "r");

    while (fgets(s, sizeof s, fp) != NULL)
        printf("%d: %s", ++linecount, s);

    fclose(fp);
}
