#include<iostream>
using namespace std;

void swapalternate(int arr[], int size){
    for(int i=0; i<size-1; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

    }
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof (arr) / sizeof(arr[0]);

    cout<<"Original Array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    swapalternate(arr,size);

    cout<<"Array after swapping alternates : ";
    for(int i=0; i<size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;

}