#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,4,10,0,20,4,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter target : ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i]==x);{
        flag = true;
        // cout<<x<<" is present";
        break;
        }
    }
    if(flag==true) cout<<x<<" is present";
    else cout<<x<<" is not present";

}