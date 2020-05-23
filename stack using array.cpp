#include<iostream>
#define max 5
int top=-1;
int a[max];
using namespace std;
int push(int n)
{
	if(top>=max)
	{
		cout<<"overflow"<<endl;
	}
	else{
		top++;
		a[top]=n;
		cout<<top<<"\t"<<a[top]<<endl;
	}
}
int pop()
{
	if(top<=-1)
	{
		cout<<"underflow"<<endl;
	}
	else{
		top--;
		cout<<a[top]<<" is popped out"<<endl;
	}
}
int main()
{
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++)
	push(a[i]);
	return 0;
}
