#include<iostream>
using namespace std;
int main()
{
	int a[100]={10,33,27,14,35,19,42,44},i,j,temp;
	for(i=0;i<8;i++)
	{
		cout<<"\n";
		for(j=i+1;j<8;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			
			}
		}
		for(int k=0;k<8;k++)
		cout<<a[k]<<"\t";
	}
	cout<<"\nfinal result"<<endl;
	for(i=0;i<8;i++)
		cout<<a[i]<<"\t";
	
}
