#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,4,10,0,20,4,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = arr[0];
    for(int i=1; i<n; i++){
        if(mx<arr[i]) mx = arr[i];
        mx =max(mx,arr[i]);
    }
    cout<<mx;


}