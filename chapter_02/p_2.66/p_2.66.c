#include <stdio.h>

/*
* Generate mask indicating leftmost 1 in x. Assume w=32.
* For example, 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
* If x = 0, then return 0.
*/
int leftmost_one(unsigned x)
{
    return 0;
}

int main() {
    unsigned x = 32;
    printf("Result: %.8X\n", leftmost_one(0xFFFFFFFF));
    printf("Result: %.8X\n", leftmost_one(0x300000));
    return 0;
}