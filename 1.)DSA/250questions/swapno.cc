#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10, temp;

    cout<<"Before swapping "<<endl;
    cout<<"a = "<< a<<", b = "<< b<<endl;

    cout<<"After swapping "<<endl;
    temp = a;
    a=b;
    b = temp;
    cout<<"a = "<<a<<", b = "<<b;

    
}