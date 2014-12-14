#include<stdio.h>
#include<stdlib.h>
#define MAX 1010

int main()
{
   int n, ans[MAX] = {0}, gus[MAX] = {0};
   int round = 1;

   while(scanf("%d", &n) && n) {

      printf("Game %d:\n", round++);

      for(int i=0; i<n; i++)
         scanf("%d", &ans[i]);

      while(1) {
         int A = 0, B = 0;

         for(int i=0; i<n; i++)
         {
            scanf("%d", &gus[i]);
            if(gus[i] == ans[i]) A++;
         }
         if(gus[0] == 0) break;

         for(int d=1; d<=9; d++) {
            int c1 = 0, c2 = 0;
            for(int j=0; j<n; j++) {

               if(ans[j] == d) c1++;
               if(gus[j] == d) c2++;
            }
            if(c1 < c2) B += c1; else B += c2;
         }
         printf("    (%d,%d)\n", A, B-A);
      }
   }
}
