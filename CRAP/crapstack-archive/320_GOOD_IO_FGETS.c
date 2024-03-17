#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 10

int main() {
    /* Read from stdin with something that isn't the nasty scanf ( fgets() ) */
    /* https://stackoverflow.com/questions/3919009/how-to-read-from-stdin-with-fgets */
    /* https://en.cppreference.com/w/c/memory/calloc */
    // void* calloc(size_t num, size_t size);
    // Allocates memory for an array of num objects of size and initializes all bytes in the
    // allocated storage to 0. On success, returns a pointer to lowest/first byte of array
    // or more precisely, rigorously and non-heretically - the allocated memory block.
    // Can be deallocated with both free() and realloc()
    char *text = calloc(1,1), buffer[BUFFERSIZE];

    printf("Enter a message: \n");
    while ( fgets(buffer, BUFFERSIZE, stdin) ) /* it breaks /w ^Z character */ {
        /* https://en.cppreference.com/w/c/memory/realloc */
        // void *realloc(void *ptr, size_t new_size);
        // Reallocates the given area of memory. 
        // ptr has to be NULL or memory previously allocated by malloc(), calloc() or too, realloc().
        // ...and also not yet freed with free()/realloc().
                                          // the 1 is added for the null byte '\0'
        text = realloc( text, strlen(text) + 1 + strlen(buffer) ); 
        strcat(text, buffer); // appends an '\n' on every call
        // this below can be commented out, and it will work just fine~
        // printf("%s\n", buffer);
    }
    printf("\ntext:\n%s", text);

    return 0;
}