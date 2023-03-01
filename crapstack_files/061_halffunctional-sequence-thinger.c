#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int l_gora, l_rowno, l_dol = 0;
    int poprzednik, nastepnik;

    printf("Give n:\n");
    scanf("%d",&n);
    printf("Give poprzednik:\n");
    scanf("%d",&poprzednik);

    for(int i = 1; i != n; i++) {
        printf("Give nastepnik:\n");
        scanf("%d",&nastepnik);
        if (poprzednik < nastepnik) {
            l_gora = l_gora + 1;
        } else if (poprzednik == nastepnik) {
            l_rowno = l_rowno + 1;
        } else {
            l_dol = l_dol + 1;
        }
        poprzednik = nastepnik;
    }

    if (l_gora == n - 1) {
        printf("Ciag jest rosnacy");
    } else if (l_gora > 1 && l_rowno > 1 && l_dol == 0) {
        printf("Ciag jest niemalejacy");
    } else if (l_rowno == n - 1) {
        printf("Ciag jest staly");
    } else if (l_dol > 1 && l_rowno > 1 && l_gora == 0) {
        printf("Ciag jest nierosnacy");
    } else if (l_dol == n - 1) {
        printf("Ciag jest malejacy");
    } else {
        printf("Ciag jest naprzemienny");
    }
}
