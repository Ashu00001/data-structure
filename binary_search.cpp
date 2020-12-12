#include<iostream>
using namespace std;
#include<algorithm>
#include<bits/stdc++.h>
int main()
{
	int n;
	cout<<"enter size : "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    sort(a,a+n);
    int x;
    cout<<"elements to be searched "<<endl;
    cin>>x;
    
    int start=0,mid,end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==x)
        {
            cout<<"element found at "<<mid+1<<endl;
            break;
        }
        else if(a[mid]<x)
        {
            start=mid+1;
        }
        else if(a[mid]>x)
        {
            end=mid;
        }
    }
    
}
