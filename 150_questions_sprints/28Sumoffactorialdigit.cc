/*
Finding the Sum of the Digits of the Factorial of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to find the sum of the digits of the factorial of a given number.
Example:
Input: number = 4
Output: 6
Explanation: The factorial of 4 is 24, and the sum of the digits (2 + 4) is 6.
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : " ;
    cin>>number;

    unsigned long long factorial = 1;
    for(int i=1; i<=number;i++){
        factorial *=i;
    }

    int sum =0;
    unsigned long long temp = factorial;

    while(temp>0){
        sum+= temp%10;
        temp /= 10;
    }

    cout<<"factorial of " <<number<<" is " << factorial<<endl;
    cout<<"Sum of factorial is : " <<sum<<endl;

    return 0;
}

/*
#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Step 1: Find factorial
    unsigned long long factorial = 1;
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }

    // Step 2: Find sum of digits
    int sum = 0;
    unsigned long long temp = factorial;
    while(temp > 0){
        sum += temp % 10;  // Add last digit
        temp /= 10;        // Remove last digit
    }

    cout << "Factorial of " << number << " is: " << factorial << endl;
    cout << "Sum of digits of factorial is: " << sum << endl;

    return 0;
}

*/