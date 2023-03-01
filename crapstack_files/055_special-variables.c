#include <stdio.h>

int main() {
    printf("Current file: %s\n",__FILE__);
    printf("Current date: %s\n",__DATE__); // Doesn't change with time
    printf("Current time: %s\n",__TIME__); // Neither does this (see seconds)
    printf("Line number: %d\n",__LINE__);
}
