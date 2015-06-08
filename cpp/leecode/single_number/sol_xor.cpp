#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int singleNumber(vector<int>& nums) {
    if (nums.empty()) return 0;

    int len = nums.size();
    int res = nums[0];

    for (int i=1; i<len; i++)
        res = res ^ nums[i];
    return res;
}

int main(void)
{
    vector<int>a;
    a.push_back(9);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    a.push_back(3);
    a.push_back(9);
    a.push_back(2);

    cout << singleNumber(a) << endl;
    return 0;
}

