#include <stdio.h>

typedef int* int_pointer;

int main() {
    int x=0x89ABCDEF;
    int y = 0x76543210;
    printf("X: 0x%.8X\n", x);
    printf("Y: 0x%.8X\n", y);
    printf("0x%.8X\n", (y & ~0xFF) | (x & 0xFF));
    return 0;
}