#include <iostream>
using namespace std;

// we are creating a function here for minimum value
int getMin(int num[], int n) {
    int min = INT8_MAX; // Use INT_MAX for a broader range
    for (int i = 0; i < n; i++) {
        if (num[i] < min) { // Corrected the comparison
            min = num[i];
        }
    }
    return min;
}

// Now we are creating a function here for maximum value
int getMax(int num[], int n) {
    int max = INT8_MIN; // Use INT_MIN for a broader range
    for (int i = 0; i < n; i++) {
        if (num[i] > max) { // Correct comparison for maximum
            max = num[i];
        }
    }
    return max;
}

int main() {
    int size;
    cin >> size;

    // Declare an array with a fixed size
    int num[100];

    // Input values into the array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    // Call getMax and getMin and display their results
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}
