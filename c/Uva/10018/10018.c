#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int count = 0;
unsigned long reverse( unsigned long n )
{
   unsigned long n_rev = 0;
   
   while( n != 0 ) {
      n_rev = (n_rev*10) + n%10;
      n /= 10;
   } 
   return n_rev;
}
bool is_palindrome( unsigned long  n )
{
   return ( n == reverse(n) );
}
unsigned long loop( unsigned long  n )
{
   count = 0;
   while( !is_palindrome( n ) )
   {
      n = n + reverse(n);
      count++;
   }
   return n;
}

int main()
{
   int num_of_line = 0;
   unsigned long num;
   
   scanf( "%d", &num_of_line );
   while( scanf( "%lu", &num ) && num_of_line--)
   {
      printf( "%d %lu\n", count, loop( num  ) );
   }
   
   return 0;
}
