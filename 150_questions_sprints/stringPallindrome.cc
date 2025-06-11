#include <iostream>
#include <string>  // Include this for using 'string'

using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a string (i.e a word): ";
    cin >> str;

    int n = str.length();
    int left = 0;
    int right = n - 1;  // Corrected variable names

    while (left < right) {
        if (str[left] != str[right]) {  // Fixed incorrect variable names
            isPalindrome = false;  // Properly set isPalindrome to false
            break;
        }
        left++;  // Increment left pointer
        right--; // Decrement right pointer
    }

    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}