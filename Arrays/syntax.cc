#include<iostream>
using namespace std;
int main(){
    int arr[5];

    arr[0] =7;
    arr[1] =4;
    arr[2] =10;
    arr[3] =0;
    arr[4] =20;
    cout<<arr[0]<<endl;
    arr[0]=90;
    cout<<arr[0]<<endl;

    cin>>arr[1];
    cout<<arr[1];
}