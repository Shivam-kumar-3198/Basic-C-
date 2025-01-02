#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 56, 7, 8};

    // Calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of elements in the array: " << size << endl;

    return 0;
}
