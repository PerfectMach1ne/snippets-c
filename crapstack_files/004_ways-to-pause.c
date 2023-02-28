//pauses
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("sleep 10");
    printf("Pe");
    getch();
    printf("pe");
    system("pause"); // Only this works (aside from beloved getch() )
    printf("ga"); // I unfortunately had a brain mildly rotted by Twitch in late 2020
    system("read discard");
    return 0;
}
