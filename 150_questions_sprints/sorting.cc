/*
Sorting an Array
Difficulty: Easy
Topics: Basic Programming, Sorting Algorithms
Description: Write a program to sort an array of numbers in ascending order.
Example:
Input: array = [3, 1, 4, 1, 5, 9]
Output: [1, 1, 3, 4, 5, 9]
Explanation: The array sorted in ascending order is [1, 1, 3, 4, 5, 9].
*/

#include<iostream>
using namespace std;

void sort(int array[], int size) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] < array[j + 1]) {
                // Swap only if the current element is greater than the next
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // cout<<array<<" ";

    sort(array, size);  // Call the sorting function

    for(int element : array) {
        cout << element << " ";
    }

    return 0;
}
