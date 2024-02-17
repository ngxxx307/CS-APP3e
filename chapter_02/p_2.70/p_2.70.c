#include <stdio.h>

/*
* Return 1 when x can be represented as an n-bit, 2’s-complement
* number; 0 otherwise
* Assume 1 <= n <= w
*/
int fits_bits(int x, int n){
    int w = sizeof(int) << 3;
    return ((unsigned) x >> (n - 1)) == 0;
}

int main(){
    printf("fits_bits(0x1, 1): %d\n", fits_bits(0x1, 1));
    printf("fits_bits(0x1, 2): %d\n", fits_bits(0x1, 2));
    printf("fits_bits(0xFFFFFFFF, 3): %d\n", fits_bits(0xFFFFFFFF, 3));
    printf("fits_bits(0xFFFFFFFF, 3): %d\n", fits_bits(0xFFFFFFFF, 32));
    printf("fits_bits(0xFF, 8): %d\n", fits_bits(0xFF, 8));
    printf("fits_bits(0xFF, 9): %d\n", fits_bits(0xFF, 9));
    return 0;
}