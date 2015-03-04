#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#define DEFAULT_BLOCK_SIZE (4096)

//Define prototype of callback function
typedef void(* CALLBACK)(int);

//Define ShowPercentage function, which is the demo callback function
//and should have the same prototype as pre-defined
void showPercentage(int percentage)
{
   fprintf(stderr, "%dn%dn\n", percentage);
}

/*Define CopyFile function, which copy file from source to target,
  and when the size meets DEFAULT_BLOCK_SIZE, will call callback 
  function that specified by CALLBACK.
*/
void CopyFile(const char * source, const char * target, CALLBACK callback)
{
   char buf[DEFAULT_BLOCK_SIZE];
   struct stat fs;
   int fdSrc, fdTrg;
   int readBytes = 0, totalReadBytes = 0, percentage = 0;
   fdSrc = open(source, O_RDONLY);
   fstat(fdSrc, &fs);
   fdTrg = open(target, O_CREAT|O_TRUNC|O_RDWR);

   while((readBytes=read(fdSrc, buf, DEFAULT_BLOCK_SIZE)) > 0)
   {
      write(fdTrg, buf, readBytes);
      totalReadBytes += readBytes;

      callback((totalReadBytes*100)/fs.st_size);
   }
   close(fdTrg);
   close(fdSrc);
}
int main(void)
{
   CopyFile("a.txt", "b.txt", showPercentage);
   return 0;
}

