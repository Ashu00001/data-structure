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

void printLevelOrder(Node *root)
{
    int count=0;
    queue<Node *>q ;
    q.push(root);
    while(!q.empty())
    {
        count++;
        Node * curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
    cout<<"No of nodes of binary tree : "<<count;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
 
}
