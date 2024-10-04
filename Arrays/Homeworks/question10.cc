// find the differnce between the sum of elements at even indices 
// to the sum of elements at odd indices

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,0,10,2,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0, oddSum = 0;

    for(int i = 0; i<n; i++){
        if(i%2 ==0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }

    cout<<oddSum<<evenSum<<endl;

    int difference = evenSum - oddSum;

    cout<<"The difference of the element is "<< difference <<endl;
}
