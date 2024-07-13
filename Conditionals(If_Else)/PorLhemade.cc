#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter your cost price";
    cin>>cp;

    int sp;
    cout<<"Enter your selling price";
    cin>>sp;

    if(sp>cp){
        cout<<"You made a profit of Rupees";
        cout<<sp-cp;
    }

    else if(sp<cp){
        cout<<"Loss";
        cout<<cp-sp;
    }

    else{
        cout<<"No profit No Loss";
    }

}