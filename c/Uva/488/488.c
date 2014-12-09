#include<stdio.h>
#include<stdlib.h>

void wave( int amplitude )
{
   int current_A = 1;

   while( current_A < amplitude ) {

      for(int i = 1; i <= current_A; i++ )
         printf("%d",current_A);
      puts("");

      current_A++;
   }
   while(current_A > 0) {

      for( int i = current_A; i > 0; i--)
         printf("%d", current_A);
      puts("");

      current_A--;
   }
}
int main()
{
   int num;
   scanf("%d", &num);

   while(num--) {
      
      int A, F;

      scanf("%d%d", &A, &F);
      for(int i = 0; i < F; i++) {
         
         wave(A);
         if( i != F-1 ) puts("");

      }
      if( num != 0 ) puts("");
   }

   return 0;
}
