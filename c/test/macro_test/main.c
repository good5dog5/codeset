#include"macro_t.h"
#include<stdio.h>

int main(void)
{
   char str[] = "THIS FOR TEST";

   printf("%c\n", MEM_B(&str[2]));
   printf("%d\n", MAX(3,100));
   printf("%d\n", MIN(10,100));

   return 0;

}
