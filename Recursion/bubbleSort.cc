#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {
    // Base case
    if (n == 0 || n == 1) {
        return;
    }

    // Solve 1 case: largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for remaining array
    sortArray(arr, n - 1);
}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};

    sortArray(arr, 5);

    // Print sorted array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
