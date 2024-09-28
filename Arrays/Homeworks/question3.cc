#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,6,7,34,9,230,-5,-9};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=1; i<n; i++){
        mn = min(mn,arr[i]);
    }
    cout<<mn;
}

// find the minimum value from an array