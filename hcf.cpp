#include<iostream>
using namespace std;
int main()
{
        int a,b,hcf;
        cout<<"Enter 1st no \t";
        cin>>a;
        cout<<"Enter 2nd no. \t";
        cin>>b;
        int min = (a<b)?a:b;
        for(int i=1;i<min;i++){
            if(a%i==0 && b%i==0){
            hcf=i;
        }
}
cout<<hcf;
}

