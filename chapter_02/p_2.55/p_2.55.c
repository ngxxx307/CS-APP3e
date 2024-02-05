#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
    // Hexadecimal for 66666 should be 1046A (1 * 16^4 + 0 * 16^3 + 4 * 16^2 + 6 * 16^1 + 10) 
    // The output is 6a 04 01 00. Therefore, the byte ordering is little endian 
    printf("show int:");
	show_int(ival);
    printf("show float:");
	show_float(fval);
    printf("show pointer:");
	show_pointer(pval);
}


int main() {
    // Write C code here
    int num = 66666;
    test_show_bytes(num);

    return 0;
}