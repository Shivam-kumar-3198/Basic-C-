/*
We have to write linear search code for vector
*/
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&arr,int x){
    for(int i=0; i<=arr.size();i++){
          if(arr[i] == x)
          return i;
          return -1;
    }
}

int main(){
     vector<int> arr = {1,2,3,4,5,6};
     int x = 1;
     int res = search(arr,x);
     if(res == -1)
     cout<<"Not present";
     else
     cout<<"Present at index "<<res;
     return 0;
}