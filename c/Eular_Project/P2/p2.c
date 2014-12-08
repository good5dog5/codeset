#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a = 0, b = 1, next = 0, sum = 0;
   
   while( (next = a+b) <= 4000000 ) {

      if( next%2 == 0 )
         sum += next;

      a = b;
      b = next;
   }
   printf("%d\n", sum);
   return 0;
}
