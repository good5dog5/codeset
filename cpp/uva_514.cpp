#include<iostream>
#include<stdio.h>
using namespace std;

int test[10010];
struct node{

   int data;
   struct node * next;
};

class stack {

   public:
        struct node * top;
        stack();
        void push( int data  );
        int  pop();
        bool isempty();
};
stack::stack(){
    top = NULL;
}
void stack::push( int data )
{
   struct node * p;
      
   p = new struct node;
   p->data = data;
   p->next = NULL;

   if( top != NULL )
      p->next = top;
   top = p;
}
int stack::pop()
{
   struct node * temp;
   int value;

   if( top == NULL ) {
      std::cout<<"\nThe stack is empty"<<std::endl;
      return -1;
   }
   else {
      temp = top;
      top  = top->next;
      value = temp->data;
      delete temp;
   }
   return value;
}
bool stack::isempty()
{
   if( top != NULL )
      return false;
   else
      return true;
}

bool isPossibile( int n )
{
   stack s;
   int tobePush = 1, cmp_idx = 1;

   while( cmp_idx <= n ) {
      
      if( tobePush == test[cmp_idx] ) { tobePush++; cmp_idx ++; }
      else if( !s.isempty() && s.top->data == test[cmp_idx] ) { s.pop(); cmp_idx++;}
      else if( tobePush < test[cmp_idx] ) { s.push( tobePush++ ); }
      else return false;

      }
   return true;

}
int main( int argc, char ** argv )
{
   stack s;
   int num, num1;
   char ch;
   
   while( scanf("%d%c", &num,&ch ) != EOF )
   {
      while( scanf("%d%c", &test[1], &ch) && test[1] )
      {
         for( int i = 2; i <= num; i++ ) {
            scanf("%d%c", &test[i], &ch );
         }
         printf( "%s\n", isPossibile(num) ? "Yes" : "No"  );
      }
      num1 = test[1];
      if( num + num1 != 0 ) puts("");
   }
   return 0;
}
