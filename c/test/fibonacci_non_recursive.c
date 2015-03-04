#include <stdio.h>

int fibonacci(int x)
{
   int previous = -1;
   int result = 1;
   int i = 0;
   int sum = 0;

   for(i = 0; i <= x; i++) {
      sum = result + previous;
      previous = result;
      result = sum;
   }
   return result;
}
int main(int argc, char ** argv)
{
   printf("%d\n", fibonacci(atoi(argv[1])));
   return 0;

}



