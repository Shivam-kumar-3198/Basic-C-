/*
Checking for Perfect Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to determine if a number is a perfect number.
Example:
Input: number = 28
Output: Perfect Number
Explanation: 28 is a perfect number because its divisors (1, 2, 4, 7, 14) sum up to 28.
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number n : ";
    cin >> n;

    int sum = 0;
  
    
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;  // Add divisor to the sum
            cout << i << " "; // Show each divisor

        }        
    }
     cout << "\nSum of divisors: " << sum << endl;


  
    if(sum == n){
        cout << "Perfect Number" << endl;
    } else {
        cout << "Not a Perfect Number" << endl;
    }

    return 0;
}
