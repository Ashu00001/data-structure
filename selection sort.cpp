#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		int j;
		int k=0;
		int temp=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[temp])
			{
				temp=j;
			}
		}
		swap(a[i],a[temp]);
		cout<<"\n\n";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<"\t";
		}
	}
	
	cout<<"\n\n";
for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
