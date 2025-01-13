#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5; // Size of the array
    int arr[5] = {1, 2, 3, 4, 5}; // Array initialization

    // Generating all subarrays
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i]; // Print elements of the current subarray
            }
            cout << " "; // Separate subarrays by a space
        }
        cout << endl; // New line after processing all subarrays starting from 'start'
    }

    return 0;
}
