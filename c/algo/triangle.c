#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   while(scanf("%d", &n) && n < 40)
   {
      for(int i = n; i > 0; i--) {
         for(int k = n-i; k > 0; k-- )
            printf(" ");
         for(int j = (i-1)*2+1; j > 0; j-- ) {
            printf("*");
         }
         printf("\n");
      }
   }
   return 0;
}
