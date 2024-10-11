// Write a program to store roll number and marks obtained by 4 students side side by side in a matrix
#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{76,81},{13,76},{82,91},{88,90}};
    
    cout<<"Roll Number and marks of students :" << endl;
    for(int i = 0; i<4;i++){
        cout<<"roll Number :" << arr[i][0] << ", Marks" <<arr[i][i] << endl;
    }

    return 0;

}