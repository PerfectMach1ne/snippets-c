#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

int main(void) {
    {
        struct car saturn; // Variable "saturn" of type "struct car"

        saturn.name = "Saturn SL/2";
        saturn.price = 15999.99f;
        saturn.speed = 175;

        printf("Name:\t\t%s\n", saturn.name);
        printf("Price (USD):\t%.2f\n", saturn.price);
        printf("Top Speed (km):\t%d\n", saturn.speed);
    }
    {
        // Initializer
        struct car saturn = {"Saturn SL/2", 16000.99, 175};

        printf("Name:\t\t%s\n", saturn.name);
        printf("Price (USD):\t%.2f\n", saturn.price);
        printf("Top Speed (km):\t%d\n", saturn.speed);
    }
    {
        // Order independent initialization
        struct car saturn = {.speed=175, .name="Saturn SL/2"};
        saturn.price = 16000.57f;

        printf("Name:\t\t%s\n", saturn.name);
        printf("Price (USD):\t%.2f\n", saturn.price);
        printf("Top Speed (km):\t%d\n", saturn.speed);
    }
    {
        // Potential readability trick?
        struct car saturn = {.name="Saturn SL/2", .price=14567.89, .speed=175};

        printf("Name:\t\t%s\n", saturn.name);
        printf("Price (USD):\t%.2f\n", saturn.price);
        printf("Top Speed (km):\t%d\n", saturn.speed);
    }
}
