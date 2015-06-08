#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    map<int,int>mp;

    int length = nums.size();
    int find;

    for (int i=0; i<length; ++i)
        mp[nums[i]] = i;
    
    map<int,int>::iterator it = mp.end();

    for(int i=0; i<length; i++) {
        
        it = mp.find(target - nums[i]);

        if ((it != mp.end()) && (it->second != i)) {
            res.push_back(min(i+1, it->second + 1));
            res.push_back(max(i+1, it->second + 1));
            break;
        }
    }
    return res;
}

int main(void)
{
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);

    vector<int> b = twoSum(a, 6);

    for (int i=0; i<b.size(); ++i)
        cout << b[i] << endl;
   return 0;
}

