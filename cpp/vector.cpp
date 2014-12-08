#include<vector>
#include<iostream>
using namespace std;
int main()
{
   std::vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   
   
   for( int i = 0; i < 3; i++ )
      cout<< v[i] << endl;

   return 0; 

}
