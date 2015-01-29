#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
   int temp = 0;
   while(temp < argc)
   {
      printf("%s\n", argv[temp++]);
   }
   printf("%d\n", argc);

   return 0;

}
