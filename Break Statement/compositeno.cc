// Write a program to check if a number is composite or not.
// (If n has extra factor except 1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check composite : ";
    cin>>n;

    bool flag = true;
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    if(n==1)
    cout<<"Neither Prime nor composite";
    else if(flag==true) cout<<"prime";
    else cout<<"composite";
}
