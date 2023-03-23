// Exercise 1-13.
// Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.
//
// v
#include <stdio.h>

void horizontalHistogram(int *);
void verticalHistogram(int *);
int findMaxArrayValue(int *);

int main() {
    int c;
    int digitCount[10];

    for (int i = 0; i < 10; i++) {
        digitCount[i] = 0;
    }

    // Await the input from user
    // Will not stop until it detects an EOF character (Ctrl+Z on Windows)
    while ( (c = getchar()) != EOF ) {
        if (c >= '0' && c <= '9') {
            ++digitCount[c-'0']; // Count all the digit characters in user's input
        }
    }

    printf("Horizontal histogram of digits:\n");
    horizontalHistogram(digitCount);
    putchar('\n');
    printf("Vertical histogram of digits:\n");
    verticalHistogram(digitCount);

    return 0;
}

void horizontalHistogram(int * array) {
    for (int i = 0; i < 10; i++) {
        putchar(i + '0');
        putchar(' ');
        for (int j = 0; j < array[i]; j++) {
            putchar(219);   // ASCII 219 == █
        }
        putchar('\n');
    }
}

void verticalHistogram(int * array) {
    int verticalHeight = findMaxArrayValue(array);

    for (int i = verticalHeight; i >= 0; i--) {
        if (i != 0) {
            for (int j = 0; j < 10; j++) {
                if (i - array[j] - 1 >= 0)
                    putchar(' ');
                else
                    putchar(219);   // ASCII 219 == █
            }
        } else
            for (int k = 0; k < 10; k++)
                putchar(k + '0');
        putchar('\n');
    }

    /*
    for (int i = 0; i < verticalHeight + 1; i++) {
        if (i != verticalHeight) {
            for (int j = 0; j < 10; j++) {
                if (i - array[j] >= 0)
                    putchar(' ');
                else
                    putchar(219);
            }
        } else
            for (int k = 0; k < 10; k++)
                putchar(k + '0');
        putchar('\n');
    } */ // THIS ONE WORKS BUT UPSIDE DOWN
}

int findMaxArrayValue(int * array) {
    int maxVal = array[0];

    for (int i = 0; i < 10; i++) {
        if (array[i] > maxVal) maxVal = array[i];
    }

    return maxVal;
}

// to copy for testing lol
// 55555576192223333447777
