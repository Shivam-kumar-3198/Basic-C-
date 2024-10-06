// Write a program to copy the contents of one array into another in the reverse order
#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/4;
    int b[5];

    // How to add arrays in reverse order
    for(int i=0; i<n; i++){
        // int j = n-1-i;

        b[i] = a[n-1-i];
    }
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }

}
