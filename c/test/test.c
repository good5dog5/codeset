#include<stdio.h>

int odd(int num) 
{
   return (num & 0x1);
}

int main(void)
{
   int test = 0;
   while(scanf("%d", &test) && test)
   {
      printf("%s\n", (odd(test)) ? "odd" : "even" );
   }

   return 0;
}
