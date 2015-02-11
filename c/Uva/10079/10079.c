#include<stdio.h>

int main(void)
{
   long long int n;
   while(scanf("%ld", &n) && (n >= 0) ) {
      n = n*(n+1)/2 + 1;
      printf("%ld\n", n);
   }

   return 0;
}
