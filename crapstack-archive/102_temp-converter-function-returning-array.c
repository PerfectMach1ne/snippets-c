// Functions returning an array
#include <stdio.h>

const int ILE = 5;
void zmiana(int[]);

int main() {
    int temp[ILE];

    printf("\n wprowadz temperature w stopniach Fahrenheita\n");
    for (int i = 0; i < ILE; i++) {
        printf("podaj temperature %d:",i+1);
        scanf("%d",&temp[i]);
    }
    zmiana(temp);

    return 0;
}

void zmiana(int t[]) {
    float celsius;
    printf("\nT [F]\tT [C]\n");
    for (int i = 0; i < ILE; i++) {
        celsius = (5.0/9.0) * (t[i] - 32);
        printf("%4d`%6.2f\n",t[i],celsius);
    }
}
