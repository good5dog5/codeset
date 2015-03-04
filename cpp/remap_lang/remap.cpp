#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


char * foo[3000] = {NULL};

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
