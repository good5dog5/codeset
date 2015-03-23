#include<stdio.h>
struct ABC {
    int index;
    char name[6];
    int score;
} ;

struct DEF {
    int att;
    char name[3];
} ;

int main(int argc, char ** argv)
{
    printf("sizeof(ABC) = %d\n", sizeof(struct ABC));
    printf("sizeof(DEF) = %d\n", sizeof(struct DEF));
    return 0;
}
