#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the factorial number : ";
    cin>>n;
    
    int f =1;
    for(int i = 1; i<=n/2; i++){
        if(n%i==0)
        f=i;
    }
    cout<<f;
}