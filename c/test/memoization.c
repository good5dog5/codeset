#include<stdio.h>

int sum_of_cubes_v1(int n)
{
   int v = 0;
   int i = 0;
   for(i = 1; i <= n; i++) v += i * i * i;

   return v;
}

int memo[10000000 + 1];
int sum_of_cubes_v2(int n)
{
   if(memo[n] != 0) return memo[n];

   int v = 0;
   int i = 0;
   for(i = 1; i <= n; i++) v += i * i * i;
   return memo[n] = v;
}

int main(void)
{
   sum_of_cubes_v2(10000000);
   return 0;
}

