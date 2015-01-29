
/*The logic used is.
 * ~0 will give bits in 1s.
 * (unsigned <type>) will cast it unsigned.
 * >> 1 right shifts 1 bit to remove the sign bit.
 * (<type>) casting it the required type again.
 */

#include<stdio.h>

int main(void)
{
   printf("Mininum Signed Char %d\n", -(char)((unsigned char) ~0 >> 1) -1);
   printf("Maxinum Signed Char %d\n", (char)((unsigned char) ~0 >> 1) );

   printf("Mininum Signed Short %d\n", -(short)((unsigned short)~0 >>1) -1);
   printf("Maxinum Signed Short %d\n", (short)((unsigned short)~0 >>1) );


}

