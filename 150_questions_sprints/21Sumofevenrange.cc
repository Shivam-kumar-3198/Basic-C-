/*
Calculating the Sum of Even Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to find the sum of all even numbers within a given range.
Example:
Input: range = [1, 10]
Output: 30
Explanation: The sum of even numbers between 1 and 10 is 2 + 4 + 6 + 8 + 10 = 30.
*/
#include<iostream>
using namespace std;

int sum0fEvenNumbers(int start, int end){
    int sum = 0;

    if(start % 2 !=0){
        start++;
    }

    for(int i= start; i<=end; i+=2){
        sum+=i;
    }

    return sum;
}

int main(){
    int start, end;

    cout<<"Enter the starting number of the range: ";
    cin>>start;

    cout<<"Enter the ending number of the range : ";
    cin>>end;

    int result = sum0fEvenNumbers(start, end);
    cout<<"Sum of even numbers between " <<start<<" and "<<end<<" is :"<<result<<endl;

    return 0;
}


