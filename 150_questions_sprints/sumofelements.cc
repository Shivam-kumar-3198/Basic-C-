#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    int n;
    cout<<"Enter numbers of terms you want to print: ";
    cin>>n;
    cout<<"Enter no you want to add : ";

    for(int i=0; i<n; i++){
        cin>>num;
        sum+=num;
    }

    cout<<"Sum is : "<<sum<<endl;
    return 0;
}