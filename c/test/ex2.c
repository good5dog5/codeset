
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char ** argv)
{
   char str[] = "Hello, world!\n";
   write(0, str, sizeof(str)-1);
   _exit(0);
}
