#include<iostream>
using namespace std;
int main()
{
int a,b;
char op;
cout<<"enter 1st no.";
cin>>a;
cout<<"enter 2nd no.";
cin>>b;

cout<<"+ - * / %";
cin>>op;

if(op=='+')
cout<<a+b;

else if(op=='-')
cout<<a-b;

else if(op=='*')
cout<<a*b;

else if(op=='/')
cout<<a/b;

else if(op=='%')
cout<<a%b;
}

