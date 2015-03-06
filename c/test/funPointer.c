#include<stdio.h>
#include<stdlib.h>

typedef int (*MYFUNC) ();

int func1()
{
   printf("\n%s\n", __func__);
}
int func2()
{
   printf("\n%s\n", __func__);
}
int func3()
{
   printf("\n%s\n", __func__);
}

static MYFUNC funcs[3] = {&func1, &func2, &func3};

int main(int argc, char ** argv)
{
   (*(funcs[atoi(argv[1])]))();
}