#include<iostream>
#include<vector>

using namespace std;

int minSubArrayLen(int s, vector<int>& nums) {

    int len = nums.size();
    int start, end, min = len , sum;
    bool found = false;

    for (start=0; start<len; start++) {
        sum = 0;
        for (end=start; end<len; end++) {
            sum += nums[end];

            if (sum >= s && (end-start) < min) {
                found = true;
                min = end-start+1;
                break;
            }
        }
    }
    if (!found) return 0;

    return min;
}
int main(void)
{
    vector<int> a;
    a.push_back(5);
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(10);
    a.push_back(7);
    a.push_back(4);
    a.push_back(9);
    a.push_back(2);
    a.push_back(8);

    cout<<minSubArrayLen(15, a)<<endl;

    return 0;
}

