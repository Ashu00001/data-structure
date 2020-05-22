#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
void insert_head(node **head)
{
	node *temp=new node();
	temp->data=89;
	temp->next=*head;
	*head=temp;
}
int addnode(node **head,int data)
{	
	node *temp;
	temp=new node();
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
void	insertend(node **head)
{
	int value=2556;
	node *temp=new node();
	temp->data=value;
	temp->next=NULL;
	node *temp1=*head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
}
void printList(node *node)  
{  
    while (node != NULL)  
    {  
        cout<<node->data<<endl;  
        node = node->next;  
    }  
}  
int main()
{
	node *head=NULL;
	addnode(&head,555);
	addnode(&head,8);
		addnode(&head,14);
	addnode(&head,855);
		addnode(&head,554);
	addnode(&head,4540);
		addnode(&head,65);
	addnode(&head,874);
	printList(head);
	cout<<"\n\n\n";
	
	printList(head);
	cout<<"\n\n";
	insertend(&head);
	printList(head);
	cout<<"\n";
	addnode(&head,588);
	printList(head);
	cout<<"\n\nhead insert"<<"\n";
	insert_head(&head);
	printList(head);
	
}
