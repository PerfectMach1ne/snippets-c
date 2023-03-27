#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price);
void set_price_v2(struct car *c, float new_price);

struct gay {
  char *name;
  void *girlfriend;
  int funny;
};

int main(void) {
    char vi[] = "Vivi";

    struct gay silva = {.funny=57, .name="Silva"};
    silva.girlfriend = &vi;

    // Just learned from my own silly little research that void ptr can be typecasted
    // To any other type of a pointer. Very nice.
    printf("%s %s %d\n", silva.name, (char*)silva.girlfriend, silva.funny);
    printf("%zu %zu %zu\n", sizeof(struct car), sizeof(struct gay), sizeof silva);

    struct car saturn = {.speed=175, .name="Saturn SL/2"};

    set_price(&saturn, 799.99f);
    printf("Price: %.2f\n", saturn.price);

    set_price_v2(&saturn, 800.99f);
    printf("Price: %.2f\n", saturn.price);

    // copy a struct
    struct car a, b;
    a.name = "ffsdfgdgsdf";
    b = a;
    printf("%s == %s\n", a.name, b.name);
}

// struct car* type, the pointer to the struct car
void set_price(struct car *c, float new_price) {
    // Error speedrun any%:
    // c.price = new_price;
    // ...because the dot operator only works on structs.
    // Here, in the Wild Pointer Land we do:
    (*c).price = new_price;
}

void set_price_v2(struct car *c, float new_price) {
    // (*c).price = new_price;
    // Works, but non-idiomatic :(
    // Equivalent line below:
    c->price = new_price;
    // Long story short:
    // Have a struct? use dot . operator
    // Have a pointer to a struct? Use arrow -> operator
}
