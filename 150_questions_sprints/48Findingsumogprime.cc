/*
Finding the Sum of Prime Factors of a Number
Difficulty: Medium
Topics: Number Theory, Mathematical Computations
Description: Write a program to find the sum of the prime factors of a given number.
Example:
Input: number = 12
Output: 5
Explanation: The prime factors of 12 are 2 and 3, and their sum is 2 + 3 = 5.

*/
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;

    for(int i=2; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int sumofPrimeFactors(int n){
    int sum = 0;

    for(int i=2; i<=n; i++){
        if(n%i==0 && isPrime(i)){
            sum += i;

            while(n%i==0){
                n /= i;
            }
        }
    }
return sum;
    
}  

int main(){
    int number;
    cout<<" Enter a number : ";
    cin>>number;

    int result = sumofPrimeFactors(number);

    cout<<"Sum of prime factors : "<<result<<endl;

    return 0;
}