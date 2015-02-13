#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>

using namespace std;
const double PI = acos(-1);

int main(void)
{
   int N;
   double R, theta[512];
   while (scanf("%d %lf", &N, &R) == 2 && N) {
      for(int i = 0; i < N; i++) {
            scanf("%lf", &theta[i]);
            theta[i] = theta * pi / 180;
      }
   }

}

