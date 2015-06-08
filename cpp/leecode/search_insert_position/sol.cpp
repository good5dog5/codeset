#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {

    int len = nums.size();
    int front = 0;
    for (int i=0; i<len; ++i)
    {
        if (nums[i] == target)
            return i;

        if (nums[i] < target) {
            front = i;
            continue;
        }
        else if (nums[i] > target && i > 0)
            return (nums[i-1] < (target)) ? front+1 : front;
        else
            return front;
    }
}
int main(void)
{
    vector<int> a;

    a.push_back(1);

    int c = searchInsert(a, 2);
    cout<< c << endl;


    return 0;
}

