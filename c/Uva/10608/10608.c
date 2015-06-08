#include<stdio.h>
#include<stdlib.h>
#define CITIZEN 30002
int group[CITIZEN];
int member[CITIZEN];

void init()
{
    int i;
    for (i=1; i<CITIZEN; i++) {
        group[i]  = i;
        member[i] = 1;
    }
}
void Union(int x, int y, int num)
{
    if (group[x] != group[y]) {

        int gx = group[x];
        int gy = group[y];

        int i;
        for (i=1; i<num+1; i++)
            if (group[i] == gx)
            {
                group[i] = gy;
                member[gx]--;
                member[gy]++;
            }
    }
}
int maxUnion(int people)
{
    int max = 0;
    int i;

    for (i=1; i<people+1; i++)
        if (member[i] > max)
            max = member[i];

    return max;
}
int main(int argc, char ** argv)
{
    int num2test;
    int i;

    scanf("%d", &num2test);

    for (i=0; i<num2test; i++) {

        init();

        int people, pair, k ;
        scanf("%d %d", &people, &pair);

        for (k=0; k<pair; k++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            Union(x, y, people);
        }
        printf("%d\n", maxUnion(people));
    }
    return 0;
}
