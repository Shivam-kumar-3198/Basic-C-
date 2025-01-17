#include <iostream>
using namespace std;

// Function to find the sum of the first n natural numbers
int findSum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        cout << "The sum of the first " << n << " natural numbers is: " << findSum(n) << endl;
    }

    return 0;
}
