#include <stdio.h>

typedef unsigned char* char_pointer;

int is_little_endian() {
    int num = 1;
    char_pointer num_ptr = (char_pointer) &num;
    return num_ptr[0] == 0x01;
}

int main() {
    int test = 1;
    printf("Size of an int is: %zu\n", sizeof(int));
    printf("Is it little endian? %s \n", is_little_endian()? "true": "false");
    return 0;
}