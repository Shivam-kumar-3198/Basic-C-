// we have to find duplicate
/*
Given a positive integer , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.
*/
#include<iostream>
using namespace std;

int main() {
    int n; 
    cout<<"Enter a number :";
    cin >> n;

    if (n == 1) {
        cout << "one" << endl;
    } else if (n == 2) {
        cout << "two" << endl;
    } else if (n == 3) {
        cout << "three" << endl;
    } else if (n == 4) {
        cout << "four" << endl;
    } else if (n == 5) {
        cout << "five" << endl;
    } else if (n == 6) {
        cout << "six" << endl;
    } else if (n == 7) {
        cout << "seven" << endl;
    } else if (n == 8) {
        cout << "eight" << endl;
    } else if (n == 9) {
        cout << "nine" << endl;
    } else {
        cout << "Greater than 9" << endl;
    }
    return 0;
}
