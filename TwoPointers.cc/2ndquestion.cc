#include<iostream>
using namespace std;

void reverse(int arr[], int i, int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0, j=n-1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    reverse(arr,1,3);

    for(int i=0l;i<n; i++){
        cout<<arr[i]<<" ";
    }
}