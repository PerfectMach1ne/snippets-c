#include <stdio.h>
#include <conio.h>

int func(void) {
    static int n;
    return (n++);
}

int main(int argc, char *argv[]) {
    int ile;
    printf("\nPodaj ile razy wywolac funkcje: ");
    scanf("%d",&ile);
    for (int i = 0; i < ile; i++) func();
    printf("Petla for wywolala funkcje %d razy", ile);
    printf("\nTeraz funkcja jest wywolywana 1 raz");
    func();
    printf("\nW sumie funkcja zostala wywolana %d razy",func());

    getch();
    return 0;
}
