#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char * pPath;
   pPath = getenv ("PATH");
   if (pPath != NULL)
      printf("PATH is %s\n", pPath);

   return 0;
}
