#include<stdio.h>


#define ARRAY_SIZE(x) ((unsigned) sizeof(x)/ sizeof((x)[0]))


int main(void)
{
   char a[50];
   printf("%d\n", ARRAY_SIZE(a));
   return 0;
}
