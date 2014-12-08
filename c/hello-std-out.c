#include<stdio.h>
#include<unistd.h>

int main()
{
   while(1)
   {
      fprintf( stdout, "hello stdout\n" );
      fprintf( stderr, "hello stderr\n" );
      sleep(1);
   }
   return 0;
}
