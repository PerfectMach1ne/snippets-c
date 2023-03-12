#include <stdio.h>
#include <conio.h> // Non-standard library used by MS-DOS compilers for I/O
// If I ever write something targeted for UNIX & Linux, better to avoid this.
// Reminder: curses for UNIX/Linux, ncurses for Windows

#define w "heloooo!!\n"

int main(int argc, char *argv[]) {
    char name[32] = "Jeff";
    printf("%s",w);
    puts(name);
    getche();
    return 0;
}
