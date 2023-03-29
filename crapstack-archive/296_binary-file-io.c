#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char bytes[6] = {5, 7, 4, 9, 57, 8008};

    fp = fopen("output.bin", "wb"); // write binary

    // In the call to fwrite, the arguments are
    // 1 * Pointer to data to write
    // 2 * Size of each "piece" of data
    // 3 * Count of each "piece" of data
    // 4 * FILE*
    fwrite(bytes, sizeof(char), 6, fp);

    fclose(fp);
}
