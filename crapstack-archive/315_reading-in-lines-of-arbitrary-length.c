#include <stdio.h>
#include <stdlib.h>

// ME NOTE: All retyped/copypasted from Beej's book, as Jesus Spinning-on-a-toilet Christ willed.
//////////////
// Read a line of arbitrary size from a file
//
// Returns a pointer to the line.
// Returns NULL on EOF or error.
//
// It's up to the caller to free() this pointer when done with it.
//
// Note that this strips the newline from the result. If you need
// it in there, probably best to switch this to a do-while.

char *readline(FILE *fp) {
    int offset = 0;     // Index next char goes in the buffer
    int bufsize = 4;    // Preferably power of 2 initial size
    char *buf;          // The buffer
    int c;              // The character we've read in

    buf = malloc(bufsize);  // Allocate initial buffer

    if (buf == NULL) // Error check
        return NULL;

    // Main loop--read until newline or EOF
    while (c = fgetc(fp), c != '\n' && c != EOF) { // if you remove check for newline, it puts the whole file in 128 sized buffer
        // Check if we're out of room in the buffer accounting
        // for the extra byte for the NUL terminator
        if (offset == bufsize - 1) { // -1 for the NUL terminator
            bufsize *= 2; // 2x the space

            char *new_buf = realloc(buf, bufsize);

            if (new_buf == NULL) {
                free(buf); // On error, free an bail (free and ball)
                return NULL;
            }

            buf = new_buf; // Successful realloc
        }

        buf[offset++] = c; // Add the byte onto the buffer
    }

    // We hit a newline or EOF by then

    // If at EOF and we read no bytes, free the buffer and
    // return NULL to indicate we're at EOF:
    if (c == EOF && offset == 0) {
        free(buf);
        return NULL;
    }

    // Shrink to fit
    if (offset < bufsize - 1) { // if we're short of the end
        char *new_buf = realloc(buf, offset + 1); // +1 for NUL terminator

        // If successful, point buf to new_buf;
        // otherwise we'll just leave buf where it is
        if (new_buf != NULL)
            buf = new_buf;
    }

    // Add the NUL terminator
    buf[offset] = '\0';

    printf("[bufsize: %d]\n", bufsize);
    return buf;
}

int main(void) {
    FILE *fp = fopen("foo.txt", "r");

    char *line;

    while ((line = readline(fp)) != NULL) {
        printf("%s\n", line);
        free(line);
        // Finally you might note that readline() returns a pointer to a malloc()d buffer.
        // As such, it’s up to the caller to explicitly free() that memory when it’s done with it
    }

    fclose(fp);
}
