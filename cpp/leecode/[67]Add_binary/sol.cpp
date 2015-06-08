#include<iostream>
#include<vector>

using namespace std;

string addBinary(string a, string b) {

    string res;
    int len1 = a.size(), len2 = b.size(), cur = 0;

    while (len1 || len2 || cur ) {

        cur += (len1 ? a[(len1--)-1] - '0' : 0) + (len2 ? b[(len2--)-1] - '0' : 0);
        res = char(cur%2 + '0') + res;
        cur /= 2;

    }
    return res;

}
int main(void)
{
    string a = "111101";
    string b = "11";

    cout << addBinary(a, b) << endl;
    return 0;
}

