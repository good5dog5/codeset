#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

typedef unsigned long long USL;

USL num = 600851475143;
int sqrt_N = (int)sqrt((double)num);

bool * n_prime = (bool *)malloc(sizeof(bool)*sqrt_N);

void gen_prime()
{
   n_prime[0] = n_prime[1] = true;

   for(int i = 2; i < sqrt_N+1; i++)
      if( !n_prime[i] )
      for(int j = i+i; j < sqrt_N+1; j+=i )
         n_prime[j] = true;
}

int main()
{

   USL biggest_prime;
   USL i = 2;

   gen_prime();

   for( ;i < sqrt_N; i++) {

      if( num%i == 0 && !n_prime[i] ) {
         biggest_prime = i;
      }
   }
   printf("%llu\n", biggest_prime);


   return 0;

}
