#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(const int arr[], const int size, const int key) {
    int start = 0;
    int end = size - 1;

    // Calculate the mid-point
    int mid = start + (end - start) / 2; 

    // Perform the binary search
    while (start <= end) {
        if (arr[mid] == key) {
            return mid; // Key found, return the index
        }
        if (key > arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid = start + (end - start) / 2; // Recalculate mid-point
    }
    return -1; // Key not found
}

int main() {
    const int evenArray[] = {2, 4, 6, 8, 12, 18}; // Even-sized array
    const int oddArray[] = {3, 8, 11, 14, 16};    // Odd-sized array

    const int evenSize = sizeof(evenArray) / sizeof(evenArray[0]); // Calculate size of evenArray
    const int oddSize = sizeof(oddArray) / sizeof(oddArray[0]);    // Calculate size of oddArray

    // Perform binary search on evenArray
    int evenKey = 12;
    int evenIndex = binarySearch(evenArray, evenSize, evenKey);
    if (evenIndex != -1) {
        cout << "Key " << evenKey << " found at index " << evenIndex << " in evenArray." << endl;
    } else {
        cout << "Key " << evenKey << " not found in evenArray." << endl;
    }

    // Perform binary search on oddArray
    int oddKey = 8;
    int oddIndex = binarySearch(oddArray, oddSize, oddKey);
    if (oddIndex != -1) {
        cout << "Key " << oddKey << " found at index " << oddIndex << " in oddArray." << endl;
    } else {
        cout << "Key " << oddKey << " not found in oddArray." << endl;
    }

    return 0;
}
