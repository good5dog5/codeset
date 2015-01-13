#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
   pid_t child_pid;

   printf("The main program process ID is %d\n", (int) getpid());

   child_pid = fork();

   if(child_pid != 0)
   {
      printf("This is the parent process, with ID %d\n", (int) getpid());
      printf("The child's process ID is %d\n", child_pid);
   }
   else
      printf("This is the child process, with ID %d\n", (int) getpid());

   return 0;
}
