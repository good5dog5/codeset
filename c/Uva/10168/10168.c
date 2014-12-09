#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define MAX 10000005

bool N_prime[MAX];

void gen_prime_table()
{
  int sqrt_N = sqrt(double(MAX));
  N_prime[0] = N_prime[1] = true;

   for( int i = 2; i <= sqrt_N; i++) {
      if( !N_prime[i] )
         for(int j = i+i; j < MAX; j+=i )
            N_prime[j] = true;
   }
}
void prime_sum(int x)
{
   for(int i = 2; i < MAX; i++ )
      if( !N_prime[i] && !N_prime[x -i] ) {
         printf("%d %d\n", i, x-i);
         break;
      }
}

int main()
{

   int num;
   gen_prime_table();

   while( scanf("%d", &num) != EOF ) {

      if( num < 8 )
         printf("Impossible.\n");

      else if( num%2 == 0 ) {
         printf("2 2 ");
         prime_sum(num-4);
      }
      else {
         printf("2 3 ");
         prime_sum(num-5);
      }
   }
   return 0;
}
