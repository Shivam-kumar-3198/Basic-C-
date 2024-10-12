// Write a program to store roll number and marks obtained by 4 students side side by side in a matrix
#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{76,81},{13,76},{82,91},{88,90}};
   // Calculate the number of rows
    int m = sizeof(arr) / sizeof(arr[0]);

    // Calculate the number of columns (optional, just for demonstration)
    int n = sizeof(arr[0]) / sizeof(arr[0][0]);


    cout<<"Roll Number and marks of students :" << endl;
    for(int i = 0; i<m;i++){
        // for(int j=0; j<n; j++){
            cout << "Roll Number: " << arr[i][0] << ", Marks: " << arr[i][1] << endl;
        // }
    }


    return 0;

}