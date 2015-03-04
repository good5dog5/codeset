#include<stdio.h>

int main(void)
{
   unsigned int r0 = 0x0000000A;
   unsigned int r1 = 0x0000000E;
   unsigned int r2 = 0x00000003;

   unsigned int result = r2 - (r0 * r1);
   printf("%8x\n", result);
   return 0;
}
