#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int x,y,mod1,mod2;

    scanf("%d",&x);
    scanf("%d",&y);
    mod1 = x%y;
    mod2 = y%x;
    printf("%d\n",mod1);
    printf("%d",mod2);
    getche();
    return 0;
}
