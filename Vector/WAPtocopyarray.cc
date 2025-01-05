// Write a program to copy the contents of one array into another in the reverse order
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int brr[n]; // Declare the array to store the reversed elements

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    for (int i = 0; i < n; i++) {
        brr[i] = arr[n - 1 - i];
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << brr[i] << " ";
    }
    cout << endl;

    return 0;
}
