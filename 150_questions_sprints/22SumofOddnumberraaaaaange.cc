#include<iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the starting range of number : ";
    cin >> start;
    cout << "Enter the ending range of number : ";
    cin >> end;

    // Adjust to the first and last odd numbers
    if (start % 2 == 0) start++;
    if (end % 2 == 0) end--;  

    // If no odd numbers in range
    if (start > end) {
        cout << "No odd numbers in the given range." << endl;
        return 0;
    }

    int n = ((end - start) / 2) + 1;
    int sum = n * (start + end) / 2;

    cout << "Sum of odd numbers between " << start << " and " << end << " is: " << sum << endl;

    return 0;
}
