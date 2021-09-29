/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Node{
  public:
  int key;
  struct Node *left,*right;
  Node(int k)
  {
      key=k;
      left=NULL;
      right=NULL;
  }
};


void inorder(struct Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(struct Node *root)
{
        if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node *root)
{
        if(root!=NULL)
    {
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
        
    }
}
int main()
{
    struct Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->left->right->left=new Node(70);
    root->left->right->right=new Node(80);
    root->right=new Node(30);
    root->right->right=new Node(60);
    cout<<"\npreorder \n";
    inorder(root);
    cout<<"\npreorder \n";
    preorder(root);
    cout<<"\npostorder \n";
    postorder(root);
}
