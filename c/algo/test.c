#include<stdio.h>

int main()
{
   double i;
   double stop = 10;
   for(i = 0; i != stop; i += 0.1)
      printf("%.1f\n", i);
   return 0;
}
