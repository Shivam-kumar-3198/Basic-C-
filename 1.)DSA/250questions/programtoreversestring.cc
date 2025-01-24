#include <iostream>
#include <cstring> // For strlen()
#define MAX_SIZE 100

using namespace std;

int main() {
    int i, j, length;
    char inputString[MAX_SIZE];  // Renamed for better clarity
    char reversedString[MAX_SIZE]; // Renamed for better clarity

    // Input the string
    cout << "Enter a string: ";
    cin >> inputString;

    length = strlen(inputString); // Get the length of the string
    j = 0;

    // Reverse the string
    for (i = length - 1; i >= 0; i--) {
        reversedString[j] = inputString[i];
        j++;
    }
    reversedString[j] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    cout << "Reversed string: " << reversedString << endl;

    return 0;
}
