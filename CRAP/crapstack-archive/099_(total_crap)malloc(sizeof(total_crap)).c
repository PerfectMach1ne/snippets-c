// Initialization of global and static variables in C

#include <stdio.h>
#include <stdlib.h>

/*
int *p = (int*)malloc(sizeof(p));    Error, because GLOBAL variables are initialized by the compiler */

int main(void) {
    const int *p = (int*)malloc(sizeof(p));
//  static int *p = (int*)malloc(sizeof(p));    Error, because STATIC variables are initialized by the compiler
    *p = 10; // WAIT THIS GIVES AN ERROR TOO. HOW DID PAST ME EVEN COMPILE THIS CRAP??
    printf("%d", *p); // 2023: this prints literal junk. this is done wrong lmao (unless i completely do not understanhd the purpose of this)
    //printf("%d", p);
}
