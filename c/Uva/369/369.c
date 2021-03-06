#include<stdio.h>
#include<stdlib.h>
#define test 25

long long C(int n, int r)
{
   if(n-r < r) r = n-r;

   long long product = 1;
   int j;

   // c(5,3) = 5!/3!*2! = 5*4/2!
   // = 4/1 * 5/2 
   for(j=1; j<=r; j++) {
      product = product * (n-r+j)/j;
   }
      

   return product;
}

int main(void)
{
   int n, r;

   while(scanf("%d %d", &n, &r) && (n+r)) {
      printf("%d things taken %d at a time is %lld exactly.\n", n, r, C(n, r));
   }
   return 0;
}
