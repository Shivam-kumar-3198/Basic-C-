#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st Number :";
    cin>>a;
    cout<<"Enter 2nd Number :";
    cin>>b;

    cout<<"Enter 3rd Number :";
    cin>>c;

    if(a>b and a>c){
        cout<<a<<"  is Greatest";
    }

    else if(b>a and b>c){
        cout<<b<<"  is Greatest";
    }

    else{
        cout<<c<<"  Is Greatest";
    }




}