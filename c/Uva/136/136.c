#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main( int argc, char ** argv )
{
   int ugly[1500] = {1};
   int t2 = 0, t3 = 0, t5 = 0, count = 1;
   int tmp = 0;

   while( count < 1500 ) {

      while( ugly[t2]*2 <= ugly[count-1] ) t2++;
      while( ugly[t3]*3 <= ugly[count-1] ) t3++;
      while( ugly[t5]*5 <= ugly[count-1] ) t5++;
      
      tmp = ugly[t2] * 2;
      if( ugly[t3]*3 < tmp ) tmp = ugly[t3] * 3;
      if( ugly[t5]*5 < tmp ) tmp = ugly[t5] * 5;

      ugly[count++] = tmp;
   }
   printf("The 1500'th ugly number is %d.\n", ugly[1499] );
   return 0;
}
