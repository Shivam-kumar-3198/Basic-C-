// Check alphabet using conditional operator
#include <iostream>
using namespace std;

int main() {
    char ch;

    // Prompt user to enter a character
    cout << "Enter any character: ";
    cin >> ch;

    // Check if the character is an alphabet using the conditional operator
    cout << "It is " << (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? "an Alphabet" : "not an Alphabet") << "." << endl;

    return 0;
}
