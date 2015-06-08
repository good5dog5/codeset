#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int singleNumber(vector<int>& nums) {

    int len = nums.size();
    sort(nums.begin(), nums.end());

    for (int i=0; i<len; i+=2) {

        if (i>len)
            return nums[i-1];

        if (nums[i] == nums[i+1])
            continue;
        else 
            return nums[i];
    }

}

int main(void)
{
    vector<int>a;
    a.push_back(9);
    a.push_back(2);
    a.push_back(1);
    a.push_back(7);
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(9);
    a.push_back(9);

    singleNumber(a);
    return 0;
}

