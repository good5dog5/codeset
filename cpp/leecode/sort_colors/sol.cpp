#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums)
{

    int len = nums.size();
    int s[3] = {0};

    for (int i=0; i<len; ++i)
    {
        cout<<s[0]<<":"<<s[1]<<":"<<s[2]<< "  ";
        for(int k=0; k<len; k++)
            cout<<nums[k] << " ";
        cout<<endl;

        if (nums[i] == 0) {
            nums[s[2]++] = 2;
            nums[s[1]++] = 1;
            nums[s[0]++] = 0;
        }
        else if (nums[i] == 1) {
            nums[s[2]++] = 2;
            nums[s[1]++] = 1;
        }
        else
            nums[s[2]++] = 2;
    }
}
int main(void)
{
    vector<int> a;
    a.push_back(2);
    a.push_back(0);
    a.push_back(0);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);

    sortColors(a);
    return 0;
}

