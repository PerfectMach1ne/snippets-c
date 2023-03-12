#include <stdio.h>

int main() {
    char oper;
    float liczba1, liczba2;

    printf("\npodaj liczbe, operator, liczbe\n");
    scanf("%f %c %f",&liczba1,&oper,&liczba2);
    switch(oper)
    {
        case '+':
            printf("\nSuma    = %f",liczba1 + liczba2);
            break;
        case '-':
            printf("\nRoznica = %f",liczba1 - liczba2);
            break;
        case '*':
            printf("\nIloczyn = %f",liczba1 * liczba2);
            break;
        case '/':
            if (liczba2==0.0) {
                printf("\nNie dziel przez zero");
                break;
            } else {
                printf("\nIloraz = %f",liczba1 / liczba2);
            }
            break;
        default:
            printf("\nNieakceptowany operator");
    }

    return 0;
}
