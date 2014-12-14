#include<stdio.h>
#include<stdlib.h>

int main()
{
   for(int i = 100; i <= 999; i++)
   {
      int sum = 0, a, b, c;
      int tmp = i;

      c = tmp%10; tmp /= 10;
      b = tmp%10; tmp /= 10;
      a = tmp;

      sum = a*a*a + b*b*b + c*c*c;

      if(sum == i)
         printf("%d\n",i);
   }
   return 0;
}
