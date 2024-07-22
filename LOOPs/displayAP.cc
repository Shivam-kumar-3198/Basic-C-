#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number to show A.P : ";
    cin>>n;
    
    int a =4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a = a+3;
    }
}