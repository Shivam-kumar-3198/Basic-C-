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

}