#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    if(n%5==0 ){
        cout<<"It is divisible by 5 and 3";
    }
    if(n%3==0){
        cout<<"It is divisible by 3";
    }
    else{
        cout<<"It is not divisible by 5 and 3";
    }
}