#include <stdio.h>

/*
* Do rotating left shift. Assume 0 <= n < w
* Examples when x = 0x12345678 and w = 32:
* n=4 -> 0x23456781, n=20 -> 0x67812345
*/
unsigned rotate_left(unsigned x, int n){
    unsigned mask = -1;
    int w = sizeof(int) << 3;
    mask = mask << (w - n);
    return (x << n) | x >> (w - n - 1) >> 1;
}

int main(){
    unsigned x = 0x12345678;
    printf("%.8X\n", rotate_left(x, 4));
    printf("%.8X\n", rotate_left(x, 20));
    printf("%.8X\n", rotate_left(x, 0));
    return 0;
}