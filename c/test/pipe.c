#define _POSIX_SOURCE 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

/* Write COUNT copies of MESSAGE to STREAM, pausing for second between each. */

void writer (const char * message, int count, FILE * stream)
{
   for(; count > 0; --count) {
      /* Write the message to the stream, and send it off immediately. */
      fprintf(stream, "%s\n", message);
      fflush(stream);
      /* Snooze a while. */
      sleep(1);
   }
}

/* Read random strings from the stream as long as possible. */

void reader(FILE * stream)
{
   char buffer[1024];
   /*Read until we hit the end of the stream. fget read until 
     either a newline or the end-of-file. */
   while (!feof (stream) && !ferror (stream) && fgets(buffer, sizeof(buffer), stream) != NULL)
      fputs(buffer, stdout);
}

int main (void)
{
   int fds[2];
   pid_t pid;

   /* Create a pipe. File descriptor for the two ends of the file are placed in fds. */
   pipe (fds);
   /* Fork a child process. */
   pid = fork();

   if (pid == (pid_t) 0) {
      FILE * stream;
      /* This is the child porcess. close our copy of the write end of the file descriptor. */
      close (fds[1]);
      /* Convert the read file desciptor to a FILE object, and read from it. */
      stream = (FILE * )fdopen (fds[0], "r");
      reader (stream);
      close (fds[0]);
   }
   else {
      /* This is the parent process. */
      FILE * stream;
      /* Close our copy of the read end of the file descriptor. */
      close (fds[0]);
      stream = (FILE *) fdopen (fds[1], "w");
      writer ("Hello, world.", 100, stream);
      close (fds[1]);
   }
   return 0;
}
