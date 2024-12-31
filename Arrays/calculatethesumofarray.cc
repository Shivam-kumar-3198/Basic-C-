#include<iostream>
using namespace std;
int main(){
       int arr[] = {7,4,10,0,20,4,1,6,8,120};
       int n = sizeof(arr)/sizeof(arr[0]);
       int sum =0;
       /*
       Explanation: Yeh line array ka size calculate kar rahi hai.
       sizeof(arr): Array ka total size (bytes mein).
       sizeof(arr[0]): Ek element ka size (bytes mein).
       n: Array ke total elements ki sankhya (size) ko store karta hai.
*/

       for(int i=0; i<n; i++){
        sum += arr[i];
       }
       cout<<sum;
}