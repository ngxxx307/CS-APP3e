#include <stdio.h>

typedef unsigned char* char_pointer;

int main() {

    printf("Is my machine arithmetic? %d\n", is_arithmetic());
    return 0;
}

int is_arithmetic() {
    int x = 0xFFFFFFFF;
    return (x >> 1 ) == x;
}