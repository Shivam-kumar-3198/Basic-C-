/*
Finding the Median of an Array
Difficulty: Medium
Topics: Arrays, Sorting
Description: Write a program to find the median of an array of numbers.
Example:
Input: array = [3, 1, 2, 4, 5]
Output: 3
Explanation: The median of the sorted array [1, 2, 3, 4, 5] is 3.

Median of an array
The median is the middle value of the sorted array:

If the array has odd number of elements → the median is the middle element.

If the array has even number of elements → the median is the average of the two middle elements.

Example 1 (odd length):
Array: [7, 1, 4]
Sorted: [1, 4, 7]
Median = middle value = 4

Example 2 (even length):
Array: [5, 2, 9, 1]
Sorted: [1, 2, 5, 9]
Median = average of middle two = (2 + 5) / 2 = 3.5
*/
#include <iostream>
using namespace std;

void sortedArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
// Function to calculate median
double medianNumber(int array[], int size)
{
    sortedArray(array, size);

    if (size % 2 != 0)
    { // odd size
        return array[size / 2];
    }
    else
    { // even size
        return (array[(size - 1) / 2] + array[size / 2]) / 2.0;
    }
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    double median = medianNumber(arr, size);
    cout << "Median : " << median << endl;

    return 0;
}