#include <stdio.h>
#include <conio.h>

#define n "nice name xd"

int main () {
    char name[30];
    printf("Enter your name:\n");
    gets(name); // gets() call ends when it finds \n in the string (AKA Enter button is pressed); gets() adds \0 at the end of the string.
    printf("\n %s, %s",n,name);
    getche();
    return 0;
}
