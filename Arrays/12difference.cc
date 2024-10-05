// Find the second largest element in the given Array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,1,0,9,4,12,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = INT16_MIN;

    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }

    int smax = INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] != mx) {
            smax = max(smax,arr[i]);
            }
    }
    cout<<"The Second Largest element is : "<< smax <<endl;

    return 0;

}