// Write a program to print ODD numbers from 1 to 100
//Using continue statement
#include<iostream>
using namespace std;
int main(){
    for(int i =1; i<=100; ++i){
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
   return 0;
}