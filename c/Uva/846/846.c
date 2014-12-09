#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int num_data;
   scanf("%d", &num_data);
   while( num_data-- ) {

      int  diff = 0, step = 0;
      int a=0, b=0;

      scanf("%d%d", &a, &b);

      diff = abs(a - b);

      if( diff ==0 ) {
         printf("0\n");
         continue;
      }


      while(1) {

         printf("D: %d, S: %d ", diff, step);
         diff = diff - step*(step+1);
         if( diff <= 2*(step+1) ) 
            break;
         step++;
      }
      printf("->%d  --> ", diff);
      if( diff == 0 ) 
         printf("%d\n", 2*step );
      else if ( diff <= step+1 ) 
         printf("%d\n", 2*step+1);
      else 
         printf("%d\n", 2*step+2);

   }
   return 0;
}
