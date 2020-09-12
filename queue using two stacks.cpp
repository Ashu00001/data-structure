#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
stack<int> a,b;

void enqueue(int x)
{
    a.push(x);
}
void dequeue()
{
while(!a.empty())
        {
            int upper=a.top();
            b.push(upper);
            a.pop();
        }
        b.pop();
        while(!b.empty())
        {
            int upper=b.top();
            b.pop();
            a.push(upper);
            
        }
}
int main() {
    
    enqueue(2);
    enqueue(1);
    enqueue(4);
    enqueue(5);
  dequeue();
 
    
   /* cout<<a.top()<<"\n";
    a.pop();
    cout<<a.top()<<"\n";
    a.pop();
    cout<<a.top()<<"\n";
    a.pop();
    cout<<a.top()<<"\n";
    a.pop();*/
    
    
        while(!a.empty())
   {
       cout<<a.top()<<"\n";
    a.pop();
   }
        return 0;
}
