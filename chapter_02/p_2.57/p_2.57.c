#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.1x", start[i]);
    printf("\n");
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
    return;
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
    return;
}

void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double));
    return;
}

int main() {
    // Write C code here
    short num = 6651;
    show_short(num);
    long num_2 = 513515641654156156;
    show_long(num_2);
    double num_3 = 245451.56;
    show_double(num_3);

    return 0;
}