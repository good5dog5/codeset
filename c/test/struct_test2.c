#include<stdio.h>

struct test {
   int i;
   short c;
   char * p;
};

int main(void)
{
   struct test * pt = NULL;
   printf("%d\n", sizeof(pt));
   return 0;
}
