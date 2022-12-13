#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Program name is: %s\n", argv[0]);
    if (argc == 1)
        printf("No extra command line arguments were passed other than the program name.\n");
    if (argc >= 2) {
        printf("Number of arguments passed: %d\n", argc);
        printf("List of all command line arguments passed:");
        for (int i = 0; i < argc; i++) {
            printf("\nargv[%d]: %s", i, argv[i]);
        }
    }

    return 0;
}
