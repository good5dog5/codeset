#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a, b, c;
   scanf("%d%d%d", &a, &b, &c);

   double result = (double)(a+b+c) / 3;
   printf("%.3f\n", result);

   return 0;
}
