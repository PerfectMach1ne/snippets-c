#include <stdio.h>
#include <conio.h>

int main() {
    float km;
    int miles, yards;
    miles = 26;
    yards = 385;
    km = (miles + yards/1760.0) * 1.609;
    printf("\nMarathon has %12.4f km",km);
    getche();
    return 0;
}
