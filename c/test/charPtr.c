#include<stdio.h>
#include<stdlib.h>

int main()
{
   char * cptr = "Thist stringiaaaaaa";

   printf("%c\n", *cptr);
   printf("%s\n", cptr);
   printf("%d\n", cptr+1);

   return 0;
}
