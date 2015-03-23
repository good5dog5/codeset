#include<stdio.h>
#include<stdlib.h>

/* this function execution before main */
static __attribute__((constructor)) void before()
{
    printf("Hello");
}
/* this function execution after main */
static __attribute__((destructor)) void after()
{
    printf(" World!\n");
}
int main(int argc, char ** argv)
{
    return EXIT_SUCCESS;
}
