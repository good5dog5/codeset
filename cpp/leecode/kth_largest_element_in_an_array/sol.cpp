#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int kthLargetst(vector<int>& nums, int k)
{
    sort(nums.begin(), nums.end());
    int min = INT_MIN;
    int cnt = 0;
    int len = nums.size();

    for (int i=len-1; i >= 0; --i) {
        if (nums[i] > min)
            cnt++;
        if (cnt == k)
            return nums[i];
    }
}
int main(void)
{
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(6);
    a.push_back(4);

    cout << kthLargetst(a, 2) << endl;
    return 0;
}

