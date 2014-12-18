#include<stdio.h>
#include<stdlib.h>
#define test 25

long long C(int n, int m)
{
   if(m < n-m) m = n-m;
   long long ans = 1;

   long long i, j;
   for(i=m+1; i<=n; i++) ans *= i;
   for(j=1; j<=n-m; j++) ans /= j;

   return ans;
}

int main(void)
{
   int m, n;

   while(scanf("%d %d", &n, &m) && (m+n)) {
      printf("%d things taken %d at a time is %lld exactly.\n", n, m, C(n, m));
   }
   return 0;
}
