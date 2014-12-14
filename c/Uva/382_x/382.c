#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define ERROR 0.0000001
#define MAX 60005

bool N_prime[MAX];
int sqrt_N = (int)sqrt((double)MAX + ERROR);

void gen_prime_table()
{
   memse
   N_prime[0] = N_prime[1] = true;
   
   for(int i = 2; i <= sqrt_N; i++ )
      if(!N_prime[i])
         for(int j = i+i; j < MAX; j+i )
            N_prime[j] = true;
}

int sum_of_factor(int num) 
{
   printf("in");
   int sqrt_num = (int)sqrt((double) num + ERROR);

   int factor[MAX]={0};

   for(int i = 2; i <= sqrt_num; i++)
      if(!N_prime[i])
      {
         while(num % i == 0) {
            num /= i;
            factor[i]++;
         }
      }

   int product = 1;
   int powsum, singlepow;
   for(int j = 2; j <= sqrt_num; j++ )
      if(factor[j]) 
      {
         printf("%d^%d ", j, factor[j]);
         powsum = 1;
         singlepow = 1;

        for(int k = 1; k <= factor[j]; k++) 
        {
            singlepow *= j;
            powsum += singlepow;
        }
        product *= powsum;
      }
   printf("\n");

   return product;
}
int main()
{

   printf("aa");
   int test = 0;
   gen_prime_table();
   for(int i = 2; i<100;i++)
      if(N_prime[i])
         printf("%d ", i);

   while(scanf("%d", &test) && test != 0) {

      int result = sum_of_factor(test);
      printf("%d\n", result);
   }
   return 0;
}

