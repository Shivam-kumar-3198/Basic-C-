/*
Counting Vowels and Consonants in a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to count vowels and consonants in a given string.
Example:
Input: string = "hello world"
Output: Vowels: 3, Consonants: 7
Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d).

*/
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for uniformity
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // To allow spaces in the input

    int vowels = 0, consonants = 0;

    for (char ch : str) {
        if (isalpha(ch)) { // Check if the character is a letter
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    return 0;
}
