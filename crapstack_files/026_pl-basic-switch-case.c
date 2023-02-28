#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int opcja;
    printf("\nOpcje:\n1 - Zapis\n2 - Edycja\n3 - Wykonanie");
    printf("\nPodaj opcje: ");
    scanf("%d",&opcja);
    switch (opcja) {
        case 1: {
            printf("\nZapis pliku");
            break;
        }
        case 2: {
            printf("\nEdycja pliku");
            break;
        }
        case 3: {
            printf("\nWykonanie pliku");
            break;
        }
        default:
            printf("\nInna opcja");
    }
    return 0;
}
