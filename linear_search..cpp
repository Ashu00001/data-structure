#include<iostream>
using namespace std;
int main()
{
	int n,x,i;
	cout<<"enter the no of elements : "<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to be searched : "<<endl;
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<"element found at "<<i+1;
			break;
		}
	}

	if(i==n)

{
		cout<<"element not found ";
	}
}
