#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a, b, c;
   while( scanf("%d%d%d", &a, &b, &c) == 3 )
   {
      if( a+b<=c || a+c<=b || b+c<=a )
         printf("not a triangle\n");

      else {

         int powa = a*a;
         int powb = b*b;
         int powc = c*c;

         if( powa==powb+powc || powb==powa+powc || powc==powa+powb )
            printf("yes\n");

         else printf("no\n");
      }
   }
}
