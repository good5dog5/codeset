#include<stdio.h>
#include<math.h>

#define MAX 9999

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {

    if (numsSize == 0) return false;

    int map[MAX] ={0};

    for (int i=0; i<MAX; i++) map[i] = -1;

    for (int i=0; i<numsSize; i++) {

        if (map[nums[i]] == -1 )
            map[nums[i]] = i;

        else {
            if (abs(map[nums[i]] -i) <= k)
                return true;
        }
        map[nums[i]] = i;
    }
    return false;
    
}
int main(int argc, char ** argv)
{
    return 0;
}

