#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   int num = 0, a = 0, b = 0;
   scanf("%d", &num);

   while(num--) {

      scanf("%d %d", &a, &b);
      int c = a - b;

      if(c > 0)       printf(">\n");
      else if( c == 0) printf("=\n");
      else            printf("<\n");
   }

   return 0;
}
