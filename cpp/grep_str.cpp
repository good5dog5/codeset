#include<iostream>
using namespace std;

std::string target("showText(");
std::string target_end(")");

void extract(std::string s)
{
   std::size_t end;
   std::size_t found = s.find(target);

   if(found != std::string::npos) {

      end = s.find(target_end, found+1);

      for(std::size_t begin = found; begin != end+1; begin++)
         std::cout << s[begin];
      std::cout << endl;

   }


}
int main(void)
{
   std::string str;

   while( std::cin >> str )
   {
      extract(str);
   }
   return 0;
}
