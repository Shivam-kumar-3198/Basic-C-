#include<iostream>
using namespace std;
int main(){
    int num, i;
    long long fact =1;
    cout<<"Enter the no to calculate factorial : ";
    cin>>num;

    fact =1;
    i=1;

    while(i<=num){
        fact = fact * 1;
        i++;
    }
    cout<<"Factorial of "<<num<<" is :"<<fact;
    cout<<"Factorial of "<<num<<"is"<<fact;
    return 0;
}