#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 1030

int main()
{
   char str[SIZE];

   while( fgets( str, SIZE, stdin ) && str[0] != '#' ) {

      long long int m = 0;
      int g = 34943;
      int digit[4] = {0};

      int len = strlen(str);

      for( int i = 0 ; i < len-1; i++ ) {
         m = ( (m<<8) + str[i] ) % g;
      }
         
      m = (m<<16) % g;
      int ans = (g - m) % g;

      for( int i = 0; i < 4; i++ ) {
         digit[i] = ans % 16;
         ans /= 16;
      }

      printf("%X%X %X%X\n", digit[3], digit[2], digit[1], digit[0]);
      

   }
   return 0;
}


