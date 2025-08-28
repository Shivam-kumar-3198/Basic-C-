/*
Finding the Second Largest Number in an Array
Difficulty: Medium
Topics: Arrays, Sorting
Description: Write a program to find the second largest number in an array.
Example:
Input: array = [10, 20, 4, 45, 99]
Output: 45
Explanation: The second largest number in the array is 45.
*/
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[n];

//     cout<<"Enter the array"
//     cin>>arr[n];

//     int temp = 0;

//     for(int i = 0; i<n; i++){
//         if(n<i){
//             temp = i;
//         }
//         cout<<temp;
//     }

//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     return 0;

// }
#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements below:\n";

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = -1e9, secondLargest = -1e9;

    // Find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Output result
    if (secondLargest == -1e9) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}
