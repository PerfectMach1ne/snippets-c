#ifndef _030_H_INCLUDED
#define _030_H_INCLUDED

void info();
void dane();
int licz();
void wyniki();

int n, x[100], max_;

void info() {
    printf("\n%s\n%s","Uwaga: program wczytuje n liczb calkowitych"," znajduje wartosc maksymalna");
}

void dane() {
    printf("\nIle liczb n = ");
    scanf("%d",&n);
    printf("\n wprowadz liczby ");
    for (int j = 0; j < n; j++)
        scanf("%d",&x[j]);
}

int licz() {
    max_ = x[0];
    for (int i = 1; i < n; i++)
        if (x[i] > max_) max_ = x[i];
}

void wyniki() {
    printf("\n maksymalna wartosc to %d",max_);
    getche();
}

#endif // 030_H_INCLUDED
