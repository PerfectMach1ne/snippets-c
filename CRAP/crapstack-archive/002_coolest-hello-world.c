#include <stdio.h>
int experiment(const char *s);

int main(void)
{
    // Hello world, but getch() is used as a "press any key to continue"
    puts("Hello World!");
    // experiment("hello world..?");    Undefined reference to 'experiment', so 001's trick might be a compiler optimization.
    getch();
    return 0;
}
