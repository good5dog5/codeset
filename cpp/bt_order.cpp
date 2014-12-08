#include<iostream>
#include<queue>
using namespace std;
struct Node
{
   Node * left;
   Node * right;
   int data;
};
struct Node * newNode( int data )
{
   struct Node * node = new( struct Node );
   node->data = data;
   node->right = NULL;
   node->left  = NULL;

   return (node);
}
struct Node * insert( struct Node * node, int data )
{
    if( node == NULL )
       return (newNode(data));
    else {
       if ( data <= node->data ) 
          node->left = insert( node->left, data );
       else
          node->right = insert( node->right, data );
       return (node);
    }
    
}

// preorder traversal
void preorder_traversal( Node * p )
{
   if (!p) return;
   cout<< p->data<<" " ;
   preorder_traversal( p->left );
   preorder_traversal( p->right );
}

void inorder_traversal( Node * p )
{
   if (!p) return;
   inorder_traversal( p->left );
   cout<< p->data<<" ";
   inorder_traversal( p->right );
}
void postorder_traversal( Node * p )
{
   if (!p) return;
   postorder_traversal( p->left );
   postorder_traversal( p->right );
   cout<< p->data<<" ";
}
void levelorder_traversal( Node * root )
{
    queue<Node*> q;
    q.push(root);
    while( !q.empty() )
    {
        Node * p = q.front();q.pop();
        cout << p->data<<" ";
        if ( p->left ) q.push(p->left);
        if ( p->right ) q.push(p->right );

    }
}


int main( int argc, char ** argv )
{
   Node * root = NULL;
   root = insert(root, 5);
   root = insert(root, 7);
   root = insert(root, 3);
   root = insert(root, 7);
   root = insert(root, 99);
   root = insert(root, 52);
   root = insert(root, 4);
   root = insert(root, 999);
   root = insert(root, 1);
   root = insert(root, 33);
   root = insert(root, 2);
   root = insert(root, 63);
   root = insert(root, 36);
   root = insert(root, 92);
   root = insert(root, 13);
   root = insert(root, 22);
   root = insert(root, 41);
   root = insert(root, 22);
   root = insert(root, 12);
   root = insert(root, 32);

   cout<< "preorder:"<<endl; 
   preorder_traversal( root );
   cout<<endl;
   cout<< "postorder:"<<endl; 
   postorder_traversal( root );
   cout<<endl;
   cout<< "levelorder:"<<endl; 
   levelorder_traversal( root );
   cout<<endl;

}
