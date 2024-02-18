#include <stdio.h>
#include <limits.h>
/* Addition that saturates to TMin or TMax */
/* Determine whether arguments can be subtracted without overflow */
int tsub_ok(int x, int y){
    int sum = x - y;
    // if x is positive and y is negative, check if positive overflow (sum is negative)
    // if x is negative and y is positive, check if negative overflow (sum is positive)
    return !((!(x & INT_MIN) && (y & INT_MIN) && (sum & INT_MIN)) || (x & INT_MIN) && !(y & INT_MIN) && !(sum & INT_MIN));
}

int main(){
    printf("tsub_ok: %d\n", tsub_ok(0x1, 0x7FFFFFFF)); // 1 - TMAX
    printf("tsub_ok: %d\n", tsub_ok(0x80000000, 0x1)); // TMIN - 1
    printf("tsub_ok: %d\n", tsub_ok(0xFFFFFFFE, 0x7FFFFFFF)); // -2 - TMAX
    return 0;
}