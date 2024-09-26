#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,5,6,7,45,67,34,675,73,04};
    int n = sizeof(arr)/4;
    int sum =0;
    for(int i=0;i<9;i++){
        sum += arr[i];
    }
    cout<<sum;
}