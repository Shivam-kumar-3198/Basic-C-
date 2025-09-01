/*
Generating a Multiplication Table for a Range
Difficulty: Easy
Topics: Arrays, Basic Programming
Description: Write a program to generate multiplication tables for numbers within a specified range.
Example:
Input: start = 2, end = 4
Output:
*/
#include <iostream>
using namespace std;

int main()
{
    int start, end, upto;
    cout << "Enter a number to print its table : ";
    cin >> start;
    cout<<"Please enter the ending number : ";
    cin>>end;
    cout<<"Enter how far you want the table e.g 10";
    cin>>upto;


    for (int i = 1; i <= upto; i++)
    {
        for (int n = start; n <= end; n++)
        {
            cout << n << " x " << i << " = " << n * i << "\t";
        }
        cout << endl;
    }

    return 0;
}