#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a = 0, b = 0;
   int c = 0, d = 0;
   
   while(++a >0 ){
      b = a;
   }

   while(--c < 0 ) {
      d = c;
   }

   printf("Biggest: %d\nSmallest:%d\n", b, d);

   return 0;


}
   
