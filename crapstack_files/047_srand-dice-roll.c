#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // srand()
#include <time.h>   // time()

int main(int argc, char *argv[]) {
    int i = 1;
    srand((unsigned int)time(0));
    printf("\nGrasz dalej - 1, nie - 0\n");
    while(i) {
        printf("Wynik losowania = %d",rand() % 6 + 1);
        printf("\nWybor: ");
        scanf("%d",&i);
    }
    getche();
    return 0;
}
