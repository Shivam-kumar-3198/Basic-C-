/*
Finding the Largest and Smallest Numbers in an Array
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find the largest and smallest numbers in an array.
Example:
Input: array = [4, 7, 1, 8, 5]
Output: Largest: 8, Smallest: 1
Explanation: The largest number in the array is 8 and the smallest is 1.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 7, 1, 8, 5};  //we have stored an array here
    int n = sizeof(arr) / sizeof(arr[0]); //Now we have to know the length of array how can  we do that 

    int largest = arr[0]; //here the index position of array is stored
    int smallest = arr[0]; //also smallest is considered as index position

    for (int i = 1; i < n; i++) //traverse the array and move forward
    {
        if (arr[i] > largest)  //if 
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << largest << " is the Largest number." << endl;
    cout << smallest << " is the smallest number." << endl;

    return 0;
}
