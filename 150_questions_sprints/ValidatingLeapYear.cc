#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the year you want to check if it is a leap year : ";
    cin>>a;

    if(a%4 == 0 ){
        cout<<a<<" is the Leap year";
    }
    else if (a%100==0)
    {
        /* code */
        cout<<a<<" is the Leap year";
    }
    
    else{
        cout<<a<<"is not a leap year";
    }
}