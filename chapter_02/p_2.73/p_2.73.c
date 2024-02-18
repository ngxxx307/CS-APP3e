#include <stdio.h>
#include <limits.h>
/* Addition that saturates to TMin or TMax */
int saturating_add(int x, int y){
    int sum = x + y;

    // if x and y don't contain negative bit then check for postive overflow
    // if x and y contain negative bit then check for negative overflow
    (!(x & INT_MIN) && !(y & INT_MIN) && (sum & INT_MIN)) && (sum = INT_MAX) || ((x & INT_MIN) && (y & INT_MIN) && !(sum & INT_MIN)) && (sum = INT_MIN);
    return sum;
}

int main(){
    printf("INT_MAX: %.8X\n", INT_MAX);
    printf("INT_MIN: %.8X\n", INT_MIN);
    printf("Saturated add: %.8X\n", saturating_add(0x7FFFFFFF, 0x7FFFFFFF));
    printf("Saturated add: %.8X\n", saturating_add(0xF0000000, 0x80000000));
    printf("Saturated add: %.8X\n", 0xFFFFFFFF + 0x7FFFFFFF);
    return 0;
}