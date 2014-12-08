#include<stdio.h>
#include<stdlib.h>

int main(){

   char s [1000];

   while ( gets(s) != NULL ) {
      
      int i;
      for( i = 0; s[i] != '\0'; i++ ) {
         s[i] = s[i] - 7;
      }
      printf("%s\n", s );
   }
}
