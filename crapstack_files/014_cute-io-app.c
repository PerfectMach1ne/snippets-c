#include <stdio.h>
#include <conio.h>

#define c "Enter a character"
#define n "Enter a number"

int main () {
    char znak;
    float x;
    char stringie[21];
    puts(c);
    scanf("%c",&znak);
    puts(n);
    scanf("%f",&x);
    printf("character = %c\n",znak);
    printf("number = %f\n",x);
    getche();
    puts("Enter a string:");
    scanf("%s",stringie);
    puts(stringie);
    return 0;
}
