#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter your cost price :";
    cin>>cp;

    int sp;
    cout<<"Enter Your Selling Price :";
    cin>>sp;

    if(sp>cp){
        cout<<"Yeah You made a profit";
    }

    if(sp<cp){
        cout<<"Once you made a loss ";
    }

    if(sp==cp){
        cout<<"No profit no Loss";
    }

}