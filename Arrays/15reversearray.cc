// Write a program to reverse the array without using any extra array
#include<iostream>
using namespace std;
int main(){
      int a[] = {1,2,3,4,5,6,7,8};
      int n = sizeof(a)/4;
      int i = 0;
      int j = n-1;

      for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
      }

      while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
      }

      cout<<endl;
      for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
      }
}