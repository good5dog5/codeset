#include<stdio.h>
#include<unistd.h>

int main(void)
{
   printf("cd /proc/%d\n", getpid());
   getchar();

   return 0;
}
