#include <stdio.h>

unsigned logical_right_shift(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    int signed_mask = -1;
    unsigned mask = (unsigned) signed_mask >> k;
    printf("mask: %.8X\n", mask);
    return xsra & mask;
}

int arithmetic_right_shift(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int mask = ((unsigned) 1 << 8 * sizeof(int) - 1) & x;
    mask = mask >> k;
    return xsrl | mask;
}


int main() {
    int signed_x = 0xFFFFFFFF;
    unsigned int unsigned_x = 0xFFFFFFFF;
    printf("unsigned:\n");
    printf("unsigned_x: %.8X\n", logical_right_shift(unsigned_x, 4));

    printf("signed:\n");
    printf("signed_x: %.8X\n", arithmetic_right_shift(signed_x, 4));
    printf("0x9FFFFFFF >> 4: %.8X\n", arithmetic_right_shift((int) 0x9FFFFFFF, 4));
    printf("0x0FFFFFFF >> 4: %.8X\n", arithmetic_right_shift((int) 0x0FFFFFFF, 4));
    printf("0x7FFFFFFF >> 4: %.8X\n", arithmetic_right_shift((int) 0x7FFFFFFF, 4));
    int x = (int) 8*sizeof(int);
    printf("test: %.8X\n", (int) 1 << 8*sizeof(int) - 1);
    printf("%d\n", x);
    return 0;
}