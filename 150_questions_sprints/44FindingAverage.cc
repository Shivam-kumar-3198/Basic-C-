/*
Finding the Average of Numbers in an Array
Difficulty: Easy
Topics: Arrays, Mathematical Computations
Description: Write a program to calculate the average of numbers in an array.
Example:
Input: array = [1, 2, 3, 4, 5]
Output: 3
Explanation: The average of the numbers is (1 + 2 + 3 + 4 + 5) / 5 = 3.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the count of numbers you want to make average : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the numbers : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }

    double average = (double)sum/n;
    cout<<"Average = "<<average<<endl;
    return 0;

    
}