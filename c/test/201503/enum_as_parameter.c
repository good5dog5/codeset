#include<stdio.h>

typedef enum {
    NORMAL = 31314,
    EXTENED
} Cycli_t;

void func(Cycli_t x)
{
    printf("%d\n", x);
}
int main(int argc, char ** argv)
{
    Cycli_t cpType = EXTENED;
    func (cpType);

   return 0;
}
