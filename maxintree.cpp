#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
  int key;
  Node *left,*right;
  Node(int data)
  {
      key=data;
      right=NULL;
      left=NULL;
  }
};

int findMax(Node *root)
{
    if(root==NULL)
    {
        return -1;
    }
    
    return (max(root->left->key,root->left->key));
}
int main()
{
    Node* NewRoot = NULL;
    Node* root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right = new Node(9);
    root->right->right->left = new Node(4);
 
    // Function call
    cout << "Maximum element is " << findMax(root) << endl;
 
}
