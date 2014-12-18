#include<stdio.h>

struct X
{
   int a; 
   char b;
   char d;
   char e;
   char h;
   char kk;
   int c;
};

int main(void)
{
   printf("%zu\n", sizeof(int));
   printf("%zu\n", sizeof(char));
   printf("%zu\n",sizeof(struct X));

   return 0;
}
