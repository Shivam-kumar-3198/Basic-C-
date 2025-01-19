#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    // Using the formula n * (n + 1) / 2
    return (n * (n + 2)) / 2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Output the result
    cout << "Sum of natural numbers from 1 to " << n << " is: " 
         << sumOfNaturalNumbers(n) << endl;

    return 0;
}
