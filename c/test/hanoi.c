#include<stdio.h>

void hanoi(int disc, char * src, char * tmp, char * dst)
{
   if(disc > 0)
   {
      hanoi(disc - 1, src, dst, tmp);
      //printf("Move disc %d from %s to %s\n", disc, src, dst );
      hanoi(disc -1, tmp, src, dst);
   }
}
int main(int argc, char ** argv)
{
   hanoi(atoi(argv[1]), "src", "tmp", "dst");
   return 0;

}
