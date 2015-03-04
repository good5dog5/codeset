#include<stdio.h>

void * ptr;

char cnum;
int  inum;
float fnum;

int main(void)
{
   ptr = &cnum;
   printf("%x\n", ptr);
   ptr = &inum;
   printf("%x\n", ptr);
   ptr = &fnum;
   printf("%x\n", ptr);

   return 0;

}
