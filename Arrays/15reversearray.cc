// Write a program to reverse the array without using any extra array
#include<iostream>
using namespace std;
int main(){
      int a[] = {1,2,3,4,5,6,7,8};
      int n = sizeof(a)/4;
      for(int i=0; i<n; i++){
        a[i] = a[n-1-i];
        cout<<a[i]<<" ";
      }
}