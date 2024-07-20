#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number to show A.P : ";
    cin>>n;

    for(int i=1; i<=2*n-1; i+=2){
        cout<<i<<" ";
    }
}