// Online C compiler to run C program online
#include <stdio.h>
/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y){
    int sum = x + y;
    
    if (x > 0 && y > 0){
        return sum >= 0;
    }
    if (x < 0 && y < 0){
        return sum <= 0;
    }
    
    return 1;
}

int main() {
    // Write C code here
    int x = 0;
    int y = 0;
    printf("%d\n",tadd_ok(x, y));

    return 0;
}