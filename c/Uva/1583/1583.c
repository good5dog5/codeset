#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100005

int minGenerator[MAX];

int main(void)
{
   memset(minGenerator, 0, sizeof(minGenerator));

   for(int i=1; i<=100000; i++) {
      
      int x = i, y = i;
      
      while(x > 0) {

         y += x%10;
         x /= 10;
      }
      if( minGenerator[y] == 0 || i < minGenerator[y]  ) 
         minGenerator[y] = i;

   }

   int n, t;
   scanf("%d", &n);

   while(n--)
   {
      scanf("%d", &t);
      printf("%d\n", minGenerator[t]);
   }

   return 0;
}
