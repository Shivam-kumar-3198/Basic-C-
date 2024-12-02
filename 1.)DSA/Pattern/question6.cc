#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;

    
    int sum = 0;
    int count = 1;

    while (count <= n)
    {
        sum = sum + count;
        count++;
    }
    
    cout<<sum;

    

    
}