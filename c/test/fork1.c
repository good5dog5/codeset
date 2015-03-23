#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
   int i;
   for(i=0; i < 3; i++) {
      if(fork() == 0) {
         printf("Child see i = %d\n", i);
         exit(1);
      } else {
         printf("Parent sees i = %d\n", i);
      }

   }
}
