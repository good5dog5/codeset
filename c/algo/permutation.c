#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool sameDigit(int a, int b, int c)
{
   int digit[10] = {0};

   digit[a%10]++;
   digit[a/10%10]++;
   digit[a/100]++;
   digit[b%10]++;
   digit[b/10%10]++;
   digit[b/100]++;
   digit[c%10]++;
   digit[c/10%10]++;
   digit[c/100]++;

   for(int i = 1; i <= 9; i++)
      if( digit[i] == 0 || digit[i] > 1 )
         return true;
   return false;
}
bool sameDigit2(int a, int b)
{
   int digit[10] = {0};
   
   digit[a%10]++;
   digit[a/10%10]++;
   digit[a/100]++;
   digit[b%10]++;
   digit[b/10%10]++;
   digit[b/100]++;

   for(int i = 1; i <= 9; i++)
      if( digit[i] > 1 ) 
         return true;
   return false;
}
int main()
{
   for(int i = 123; i <= 987/3+1; i++) {

      for( int j = 345; j <= (987/3)*2+1; j++ ) {

         if( j/i < 2 || sameDigit2(i, j) ) continue;

         for(int k = 456; k <= 987; k++ ) {

            if( k/i < 3 || sameDigit(i, j, k) ) continue;
            if( j%i==0 && j/i==2 && k%i==0 && k/i==3  )
               printf("%d %d %d\n", i, j, k);
         }
      }
   }

   return 0;
}
