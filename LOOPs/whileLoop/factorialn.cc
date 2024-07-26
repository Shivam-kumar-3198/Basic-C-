// find the sum from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    //logic
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    }