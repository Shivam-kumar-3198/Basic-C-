#include <iostream>
#include <string>  // Include this for using 'string'

using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a string (i.e a word): ";
    cin >> str;

    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
