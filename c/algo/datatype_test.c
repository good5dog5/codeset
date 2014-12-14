#include<stdio.h>
#include<stdlib.h>

int main()
{
   int test1 = 11111 * 11111;
   int test2 = 111111 * 111111;
   int test3 = 111111111 * 111111111;

   double test4 = 11111 * 11111;
   double test5 = 111111 * 111111;
   double test6 = 111111111 * 111111111;

   printf("%d\n%d\n%d\n", test1, test2, test3);
   printf("%f\n %f\n %f\n", test4, test5, test6);

   return 0;



}
