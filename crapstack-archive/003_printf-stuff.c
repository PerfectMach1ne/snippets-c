// I wrote all of this on 02/11/2020 apparently
#include <stdio.h>
int s;

int main(void)
{
    int a;
    printf("%d\n", a);
    a = 21;
    printf("%i\n", a);
    printf("test\n");
    printf("%d\n", s);
    s = 910;
    printf("%d\n", s);
    getch();
    printf("zero:",0,"\n");
    printf("\nWIDTH%*c\n",5,'T'+'R'+'I'+'C'+'K'); // I cannot in good faith say I remember what this does
    getch();
    printf("Characters: %c %c \n", 'a', 66);
    printf("Decimals: %d %ld\n", 1977, 650000L);
    printf("Preceding with blanks: %10d \n", 1977);
    printf("Preceding with zeros: %010d \n", 1977); // The zerofill
    printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
    printf("Width trick: %*d \n", 5, 10);
    printf("%s \n", "A string");
    return 0;
}
