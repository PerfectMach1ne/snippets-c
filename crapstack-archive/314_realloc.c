#include <stdlib.h>
#include <stdio.h>

int main(void) {
    // Allocate space for 20 floats
    float *p = malloc(sizeof *p * 20); // sizeof *p == sizeof(float)

    // Assign them fractional values 0.0-1.0:
    for (int i = 0; i < 20; i++)
        p[i] = i / 20.0;

    // But wait! Let's actually make this an array of 40 elements
    float *new_p = realloc(p, sizeof *p * 40);

    // CHeck to see if we successfully reallocated
    if (new_p == NULL) {
        printf("Error reallocating!\n");
        return 1;
    }

    // do thsi if it worked
    p = new_p;

    // And assign the new elements values in the range 1.0-2.0:
    for (int i = 20; i < 40; i++)
        p[i] = 1.0 + (i - 20) / 20.0;

    // Print all da values
    for (int i = 0; i < 40; i++) {
        printf("%f\n", p[i]);
    }

    // FREE THE SPACE OMG I FORGOR
    free(p);
}
