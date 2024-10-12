// Write a program to add two matrices 
// If there is unequal matix then addition not possible
#include<iostream>
using namespace std;
int main(){
    int mat1[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int mat2[3][3] ={
        {10,11,12},
        {13,14,15},
        {16,17,18}
    };

    // Result matrix creation
    int result[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // final result declared
    cout << "Result of matrix addition:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}