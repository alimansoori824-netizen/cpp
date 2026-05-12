#include<iostream>
using namespace std;
int main()
{
    string website;
    cout<<"Enter website name";
    cin>>website;

    if(website == "amazon")
        string p;
    cout<<"Enter product or service";
    cin>>p;

    if(p == "product"){
        string pr;
        cout<<"Enter shoes or clothes";
        cin>>pr;

        if(pr == "shoes"){
            cout<<"1000";
        }

        else if(pr == "clothes"){
            cout<<"3000";
        }
    }
    else if (p == "service"){
        cout<<"not available";
    }
    else{
        cout<<"Invalid";
    }
}
 else{
    cout<<"Invalid name";
 }
