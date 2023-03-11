// 2023 note what was I even trying to do here lol
#include <stdio.h>
#include <stdlib.h>

int main() {
    char nanana[100];
    char banana[100];
    char babana[100];
    char nababa[100];
    char bababa[100];
    char ababan[100];
    double atof_;

    gets(nanana);
    atof_ = atof(nanana);
    printf("%f",atof_);

    // I'm lazy so here's how the rest of it works:
    /*
    ** atoi() - string to integer
    ** atol() - string to long
    ** strod() - string to double (double number, while atof does just double value, whatever that means)
    ** strol() - string to long
    */

    return 0;
}
