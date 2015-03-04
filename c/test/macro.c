#include<stdio.h>
void f()
{
   puts("Function");
}
#define f() puts("Macro")
#define square(a) a*a

int main(void)
{
   int x = 3;
   printf("%d\n", square(3++));

      return 0;
}
