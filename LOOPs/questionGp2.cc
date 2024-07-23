#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Numer pf terms : ";
    cin>>n;

    //Gp = 1,4,8,16
    int a = 3;
    for(int i = 3 ; i<=n; i++){
        cout<<a<<" ";
        a = a*4;
    }
}