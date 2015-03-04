#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

std::string target("\"");
std::string target_end(",");

char * foo[3000] = {NULL};

void extract(std::string s)
{
   std::size_t end;
   std::size_t found;
   std::size_t pos = 0;

   //while((found = s.find(target, pos)) != std::string::npos) {

   //   end = s.find(target_end, found+1);

   //   for(std::size_t begin = found+1; begin != end-1; begin++)
   //      std::cout << s[begin];
   //   std::cout << endl;

   //   pos = end+1;
   //}
}
int main(int argc, char ** argv)
{
   string line;
   int cnt = 0;
   int index = 0;

   ifstream idx, lang; 
  
   idx.open(argv[1]);
   lang.open(argv[2]);

   if(!idx || !lang) {
      cout<<"open file fail"<<endl;
      return -1;
   }

   while(getline(lang, line))
   {
      foo[cnt++] = strdup(line.c_str());
   }
   while(idx >> index)
   {
      cout<<foo[index]<<endl;
   }


   
   return 0;
}
