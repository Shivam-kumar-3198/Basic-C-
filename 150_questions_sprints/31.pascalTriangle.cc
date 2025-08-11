/*
Generating a Pascal’s Triangle
Difficulty: Medium
Topics: Arrays, Mathematical Computations
Description: Write a program to generate Pascal's Triangle up to a given number of rows.
Example:
Input: rows = 4
Output:

1  
1 1  
1 2 1  
1 3 3 1
*/
// Extreme brute force approach
/*
int nCr(int n, int r){
long long res = 1;
for(int i=0; i<r; i++){
res=res*(n-i);
res=res/(i+1);
}
return res;
}
*/
#include<iostream>
#include<vector>
using namespace std;

void generatePascal(int rows){

    vector<vector<int>> pascal(rows);

    for(int i=0; i<rows; i++){
        pascal[i].resize(i+1);
        pascal[i][0] = pascal[i][i] =1;

        for(int j=1; j<i; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    for(int i=0; i<rows;i++){
        for(int j=0; j<=i; j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
   int rows;
   cout<<"Enter the number of rows : ";
   cin>>rows;

   generatePascal(rows);
   return 0;
}