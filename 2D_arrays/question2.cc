// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 colums
#include<iostream>
using namespace std;

int main() {
    int arr[5][5];
    
    for (int i=0; i<5; i++){ // this is used for loop over rows
        for(int j=0; j<5; j++){  // this is used for  loop over columns
            arr[i][j] = 10; //here we added the value of array (declared)
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<arr[i][j] <<" ";
        }
         cout<<endl;
    }
   
    return 0;
}
