#include <stdio.h>
#include <conio.h>

#define MS 60

int main() {
    int sek,min,rr;
    puts("Program przelicza sekundy na minuty.");
    puts("Podaj liczbe sekund:");
    scanf("%d",&sek);
    min = sek/MS;   // Dzielenie calkowitoliczbowe
    rr = sek%MS;    // Dzielenie modulo - reszta z dzielenia
    printf("%d sekund = %d minut i %d sekund",sek,min,rr);
    getche();
    return 0;
}
