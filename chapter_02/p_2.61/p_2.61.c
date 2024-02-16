#include <stdio.h>

typedef unsigned char* char_pointer;

int check_A(int x){
    return x != 0;
}

int check_B(int x){
    return x != 0xFFFFFFFF;
}

int check_C(int x){
    return (0x00FFFFFF | x) != 0x00FFFFFF;
}

int check_D(int x){
    return (0xFF & x) != 0xFF;
}


int main() {
    printf("Check if any bit of x contains 1\n");
    printf("0: %d\n", check_A(0));
    printf("2: %d\n", check_A(2));
    printf("-5: %d\n", check_A(-5));
    printf("\n");

    printf("Check if any bit of x contains 0\n");
    printf("0: %d\n", check_B(0));
     printf("0xFFFFF0FF: %d\n", check_B(0xFFFFF0FF));
    printf("0xFFFFFFFF: %d\n", check_B(0xFFFFFFFF));
    printf("\n");

    printf("Check if any bit in the least significant bytes x contains 1\n");
    printf("0x01FFFFFF: %d\n", check_C(0x01FFFFFF));
    printf("0xFFFFFFFF: %d\n", check_C(0xFFFFFFFF));
    printf("0x00FFFFFF: %d\n", check_C(0x00FFFFFF));
    printf("\n");

    printf("Check if any bit in the most significant bytes x contains 0\n");
    printf("0xFFFFFFF0: %d\n", check_D(0xFFFFFFF0));
    printf("0xFFFFFFFF: %d\n", check_D(0xFFFFFFFF));
    printf("0xFFFFFFFF: %d\n", check_D(0xFFFFFFF1));

    printf("%.8X\n", 0xFF);
    return 0;
}