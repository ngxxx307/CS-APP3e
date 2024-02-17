#include <stdio.h>

/*
* Mask with least signficant n bits set to 1
* Examples: n = 6 --> 0x3F, n = 17 --> 0x1FFFF
* Assume 1 <= n <= w
*/
int lower_one_mask(int n){
    unsigned mask = -1;
    int w = sizeof(int) << 3;
    return mask >> (w - n);
}

int main(){
    printf("lower_one_mask(1): %.8X\n", lower_one_mask(1));
    printf("lower_one_mask(4): %.8X\n", lower_one_mask(4));
    printf("lower_one_mask(31): %.8X\n", lower_one_mask(31));
    printf("lower_one_mask(32): %.8X\n", lower_one_mask(32));
    return 0;
}