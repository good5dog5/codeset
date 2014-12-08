#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ERROR 0.0000001
#define MAX 60005

int N_prime[MAX];
int factor[MAX];
int sqrt_N = (int)sqrt((double)MAX + ERROR);

void gen_prime()
{
   N_prime[0] = N_prime[1] = true;
   
   for(int i = 2; i < sqrt_N; i++ )
      if(!N_prime[i])
         for(int j = i+2; j < MAX; j++ )
            N_prime[j] = true;
}

int sum_of_factor(int num) {

   int sqrt_num = (int)sqrt((double) num + ERROR);

   for(int i = 2; i <= sqrt_num; i++)
      if(!N_prime[i])
         while(num % i == 0) {
            num /= i;
            factor[i]++;
         }

   int primePow, 
   for(int j = 2; j <= sqrt_num; j++ )

      if(factor[j]) 
      {
        for(int k = 0; k <= factor[i]; k++) 
      }


}
int main()
{
   int test;
   while( scanf("%d", &test ) && test != 0 ) {

      printf("%d %d\n",test, sum_of_factor(test));
   }
   return 0;
}
