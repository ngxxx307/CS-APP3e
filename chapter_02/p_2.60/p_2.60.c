#include <stdio.h>

int replace_bytes(unsigned x, int i, unsigned char b) {
    return (x & ~(0xFF << i * 8)) | (0xAB << i * 8);
}

int main() {
    printf("%.8X\n", replace_bytes(0x12345678, 2, 0xAB));
    printf("%.8X\n", replace_bytes(0x12345678, 0, 0xAB));
    return 0;
}