#include<stdio.h>
#include<math.h>
#define MAX 32780
#define ERROR 0.00000001

int sieveNum[MAX] = {0};
int prime[MAX] = {0};

void sieve()
{
   int i = 0, j = 0, k = 0;

   for(i=0; i<MAX; i++) {
      sieveNum[i] = 1;
      prime[i] = 0;
   }

   sieveNum[0] = 0;
   sieveNum[1] = 0;

   for(i=2; i<MAX; i++) {

      if(sieveNum[i]) {

         prime[k++] = i;

         for(j=i*i; j<MAX; j+= i)
            sieveNum[j] = 0;
      }
   }
}
int main(void)
{
   sieve();

   int p, e;
   while( (scanf("%d", &p )) != EOF && p != 0 )
   {
      scanf("%d", &e);
      int product = 1;
      product *= (int)(pow((double)p, (double)e) + ERROR);

      while( getchar() == ' ')
      {
         scanf("%d %d", &p, &e);
         product *= (int)( pow( (double)p, (double)e) + ERROR);
      }
      product -= 1;


      int i = 0, first = 1;
      int output[5000] = {0};

      while(product != 1)
      {
         if((product%prime[i]) == 0)
         {
            output[i]++;
            product /= prime[i];
            continue;
         } 
         i++;
      }

      for(; i >= 0; i--)
      {
         if(output[i])
         {
            if(!first)
               printf(" ");
            first = 0;
            printf("%d %d", prime[i], output[i]);
         }
      }
      printf("\n");
   }
   return 0;
}
