#include<stdio.h>
#include<stdlib.h>
#define MAX 25

int n, k, m, group[MAX];

int chose(int person, int direction, int times)
{
   while(times--) {

      do {

         person = 
      }
   }
}

int main(void)
{
   while(scanf("%d %d %d", &n, &k, &m) == 3 && n) {

      int left = n;
      int A = n, B = 1;

      for(int i=1; i<=n; i++) a[i] = i;

      while(left) {
         
         A = chose(A, -1, k);
         B = chose(B,  1, m);

         printf("%3d", A); left--;
         if(A != B)
         {
            printf("%3d", B);
            left--;
         }
         if(left)
            printf(",");
      }
      printf("\n");
   }

   return 0;
}
