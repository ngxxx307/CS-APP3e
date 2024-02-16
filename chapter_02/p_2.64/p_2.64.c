#include <stdio.h>

int any_odd_one(unsigned x) {
    unsigned mask = 0x55555555;
    return !!(mask & x);
};

int main() {
    printf("0xFFFFFFFF: %d\n", any_odd_one(0xFFFFFFFF));
    printf("0x00000000: %d\n", any_odd_one(0x00000000));
    printf("0xAAAAAAAA: %d\n", any_odd_one(0xAAAAAAAA));
    printf("0xAAAAAAAA: %d\n", any_odd_one(0xAAAAAAA1));
    return 0;
}