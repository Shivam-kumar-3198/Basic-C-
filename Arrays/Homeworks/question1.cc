// calculate the product of all the elements in the given array
#include<iostream>
using namespace std;
int main(){
    int arr[] ={34,45,56,66,78};
    int length = sizeof(arr)/sizeof(arr[0]); // Get the length of the array
    int product =1;// Initialize product to 1

    for(int i = 0; i<length;i++){
        product *= arr[i];
    }

    cout<<"product is " <<product<<endl;

}