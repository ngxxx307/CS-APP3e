#include <stdio.h>

int replace_bytes(unsigned x, int i, unsigned char b) {
    unsigned int* x_ptr = &x;
    unsigned char* x_char_ptr = (unsigned char*) x_ptr;
    x_char_ptr[i] = b;
    return x;
}

int main() {
    printf("%.8X\n", replace_bytes(0x12345678, 2, 0xAB));
    printf("%.8X\n", replace_bytes(0x12345678, 0, 0xAB));
    return 0;
}