// Write a program to print natural number in reverse order
#include<iostream>
using namespace std;
int main(){
    int num = 0,i;
    cout<<"Enter any number : "<<endl;
    cin>>num;

    for(i =num; i>=1;i--){
        cout<<i<<endl;
    }
    return 0;
}