#include <stdio.h>
/* Declaration of data type where 4 bytes are packed
into an unsigned */
typedef unsigned packed_t;
/* Extract byte from word. Return as signed integer */
int xbyte(packed_t word, int bytenum) {
    int maxByte = sizeof(int);
    return (int) word << ((bytenum) << 3) >> ((sizeof(int) - 1) << 3);
}

int main(){
    unsigned word = 0xF0F1FFF3;
    printf("0: %d, %.8X\n", xbyte(word, 0), xbyte(word, 0));
    printf("1: %d, %.8X\n", xbyte(word, 1), xbyte(word, 1));
    printf("2: %d, %.8X\n", xbyte(word, 2), xbyte(word, 2));
    printf("3: %d, %.8X\n", xbyte(word, 3), xbyte(word, 3));
    return 0;
}