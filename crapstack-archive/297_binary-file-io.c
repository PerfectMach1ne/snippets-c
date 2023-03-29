#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb"); // write binary

    while (fread(&c, sizeof(char), 1, fp) > 0) // returns number of bytes read OR 0 on EOF
        printf("%d\n", c);

    fclose(fp);
}
