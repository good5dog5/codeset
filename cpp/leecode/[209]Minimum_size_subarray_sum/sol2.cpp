#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minSubArrayLen(int s, vector<int>& nums) {

    int sum=0,front=0,back=0,res=INT_MAX;

    while(front < nums.size() || sum >= s) {

        if(sum < s && front < nums.size())
            sum+=nums[front++];

        if(sum >= s) {
            res = min(res,front-back);
            sum -= nums[back++];
        }
    } 
    return res==INT_MAX?0:res;
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

