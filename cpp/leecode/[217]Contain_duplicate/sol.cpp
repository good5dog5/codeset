#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    return nums.size() > set<int>(nums.begin(), nums.end()).size();

}
int main(void)
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);


    return 0;
}

