#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ERROR 0.0000001
#define MAX 60005

bool N_prime[MAX];
int sqrt_N = (int)sqrt((double)MAX + ERROR);

void gen_prime_table()
{
   memset(N_prime, false, sizeof(N_prime));
   N_prime[0] = N_prime[1] = true;
   
   for(int i = 2; i <= sqrt_N; i++ )
      if(!N_prime[i])
         for(int j = i+i; j < MAX; j+=i )
            N_prime[j] = true;
}

int sum_of_factor(int num) 
{
   int factor[MAX]={0};

   for(int i = 2; i <= sqrt_N; i++) 
      if(!N_prime[i]) {
         while(num % i == 0) {
            num /= i;
            factor[i]++;
         }
      }
   int product = 1;
   int powsum, singlepow;

   for(int j = 2; j <= sqrt_N; j++ )
      if(factor[j]) 
      {
         powsum = 1;
         singlepow = 1;

        for(int k = 1; k <= factor[j]; k++) 
        {
            singlepow *= j;
            powsum += singlepow;
        }
        product *= powsum;
      }
   return product;
}
int main()
{

   int num;

   gen_prime_table();

   puts("PERFECTION OUTPUT");
   while(scanf("%d", &num) && num)
   {
      int result = sum_of_factor(num);
      result -= num;

      if(num == result)
         printf("%5d  %s\n", num, "PERFECT");
      else if (num > result)
         printf("%5d  %s\n", num, "DEFICIENT");
      else
         printf("%5d  %s\n", num, "ABUNDANT");
   }
   puts("END OF OUTPUT");

   return 0;
}

