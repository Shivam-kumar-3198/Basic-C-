// #include<iostream>
// using namespace std;
// int main(){
//     int arr[];
//     cout<<"Enter the elements you want to store in an array :"<<endl;
//     cin>>arr[];

//     int max = arr.size();

//     for(int i=0; i<max;i++){
//         if(arr>max){
//             cout<<"smallest number is :"<<endl;
//         }
//         return max;
//     };
// }
#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements you want to store in the array :";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"Enter "<<n<<" elements that will be stored in the array"<<endl;
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
    
    int min = INT16_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The smallest is "<<min<<endl;

}

// Time complexiety  = 