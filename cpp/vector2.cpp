#include<iostream>
#include<vector>
using namespace std;

typedef vector<char> char_vector;
void print_out( char_vector c )
{
//   while( !c.empty() )
}
int main ()
{
  char c = 0;
  char_vector array;
  
  while( c != 'x' ) {
     std::cin>>c; 
     array.push_back(c);
  }
  
  return 0;
}

