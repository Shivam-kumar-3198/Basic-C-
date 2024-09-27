// Wap to print maximum in array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,1,3,4,6,220};
    int n = sizeof(arr)/4;
    int max = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<max;
}