#include<iostream>
using namespace std;
int main(){
    int arr[5] = {9,8,7,6,2};//no need to declare array value agar value already daal diya hai to
    // cout<<"Enter the numbers you want to print : ";
    cout<<"Registered numbers are"<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}