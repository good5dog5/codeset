#define _BSD_SOURCE
#include<stdio.h>
#include<unistd.h>

int main(void)
{
   FILE * stream = popen ("sort", "w");
   fprintf (stream, "This is atest.\n" );
   fprintf (stream, "Hello, world.\n" );
   fprintf (stream, "My dog has fleas.\n" );
   fprintf (stream, "This program is great.\n" );
   fprintf (stream, "One fish, two fish.\n" );
   return pclose (stream);
}
