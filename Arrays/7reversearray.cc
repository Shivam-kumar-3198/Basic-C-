// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {9,8,7,6,2};//no need to declare array value agar value already daal diya hai to
//     // cout<<"Enter the numbers you want to print : ";
//     cout<<"Registered numbers are"<<endl;
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the count of numbers : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The numbers you entered are :";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<endl;
    }
    

}