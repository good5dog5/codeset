#include<stdio.h>
#include<stdlib.h>
#define MAX 25

int n = 0, k = 0, m = 0;
int group[MAX] = {0};

int main(void)
{
   while(scanf("%d%d%d", &n, &k, &m) && n && k && m ) {

      int left = n;
      int cnt = 0;
      int A = n-1, B = 0;

      for(cnt=0; cnt < n; cnt++) group[cnt] = cnt+1;

      while(left) {

         for(cnt=0; cnt < k; )
         {
            A = (A+1) % n;
            if(group[A]) cnt++;
         }
         for(cnt=0; cnt < m; )
         {
            B = (B-1+n) % n;
            if(group[B]) cnt++;
         }

         if(A != B)
         {
            printf("%3d%3d",group[A], group[B]);
            group[A] = group[B] = 0;
            left -= 2;
         }
         else
         {
            printf("%3d", group[A]);
            group[A] = 0;
            left--;
         }
         if(left)
            printf(",");
      }
      printf("\n");
   }
   return 0;
}
