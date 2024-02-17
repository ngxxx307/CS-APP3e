#include <stdio.h>

int odd_ones(unsigned x){
    return 0;
}

void printBits(unsigned int num)
{
   for(int bit=0;bit<(sizeof(unsigned int) * 8); bit++)
   {
      printf("%i ", num & 0x01);
      num = num >> 1;
   }
   printf("\n");
}

int main() {

    return 0;
}