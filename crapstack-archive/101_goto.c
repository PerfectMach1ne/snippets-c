#include <stdio.h>
#include <process.h>    // exit()

float power(void);

int main(void) {
    theForbbidenKeyword:;
    float s_kuli;
    s_kuli = power();
    printf("\nPowierzchnia kuli = %.1f",s_kuli);
    goto theForbbidenKeyword;
}

float power(void) {
    float r;
    printf("\nPodaj promien kuli: ");
    scanf("%f",&r);
    if ( r < 0.0 ) {
        printf("\nZla wartosc");
        exit(0);
    }
    return (4.0 * 3.14159 * r * r);
}
