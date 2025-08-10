/*
Finding Missing Numbers in a Sequence
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find missing numbers in a sequence from 1 to n.
Example:
Input: sequence = [1, 2, 4, 5]
Output: [3]
Explanation: The missing number in the sequence from 1 to 5 is 3.
*/
#include<iostream>
#include<vector>
using namespace std;


int missingNumber(int nums[], int size, int largestNum) {
    int expectedSum = largestNum * (largestNum + 1) / 2; // Correct sum formula
    int currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum += nums[i];
    }
    return expectedSum - currentSum;
}

int main() {
    int largestNum;
    cout << "Enter the largest number in the sequence (n): ";
    cin >> largestNum;

    int size = largestNum - 1; // one number missing
    int nums[size];

    cout << "Enter " << size << " numbers from the sequence 1 to " << largestNum << ":\n";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "The missing number is: " 
         << missingNumber(nums, size, largestNum) 
         << endl;

    return 0;
}
