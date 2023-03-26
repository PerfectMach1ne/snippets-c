#include <stdio.h>
#include "115.h"

extern int var;
char raw[] = "Meat";

int main(int argc, char *argv[]) {
    printf("%d\n",var);
    var = 10;
    printf("%d\n",var);
    puts(raw);

    return 0;
}
