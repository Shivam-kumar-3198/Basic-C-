#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to convert + to - :";
    cin>>n;

    if(n<=0) n = -n;
    cout<<n;
}