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
#include <cctype>
using namespace std;
int main()
{
    string str;

    cout << "Enter a string (i.e a setence or a word) : ";
    cin >> str;

    int vowels = 0, consonants = 0;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;

    return 0;
}