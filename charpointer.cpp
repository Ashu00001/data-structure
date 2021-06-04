#include<iostream>
using namespace std;
int main()
{
    char str[]="abcde";//would create a temperory memory then create a char array and copy the temporary  memory to it
int a[]={1,2,3};

char *pstr="abcde";//would only create a pointer pointing to temporary memory
cout<<a<<endl;//print address of a
char b[]="abc";
cout<<b<<endl;//print the whole b

char *c=&b[0];
cout<<c<<endl;//prints the b as well

char c1='a';
char *pc=&c1;

cout<<c1<<endl;
cout<<pc<<endl;
}
