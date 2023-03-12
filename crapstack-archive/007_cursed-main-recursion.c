/*
int main(void)
{
    static int i = 5;
    if (--i){
        printf("%d ", i);
        main(10);
    }
} */
// 2020 comment
// "The reason shit above won't work but this will, is because in C a function without any declared arguments is assumed to be a function that
// Can take in ANY amount of ANY arguments"

#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i){
        printf("%d ", i);
        main(10);
    }
}
