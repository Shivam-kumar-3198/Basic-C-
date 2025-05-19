/* Validating Leap Years
Difficulty: Easy
Topics: Basic Programming, Date Handling
Description: Write a program to check if a given year is a leap year.
Example:
Input: year = 2020
Output: Leap Year
Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    int a;
    cout<<"Enter a number to check it is leap year or not : ";
    cin>>a;

    if((a%4 == 0 && a%100 !=0 ) || (a%400 == 0)){
        cout<<a<<" is a leap year";
    }
    else{
        cout<<"It is not a leap year";
    }
}