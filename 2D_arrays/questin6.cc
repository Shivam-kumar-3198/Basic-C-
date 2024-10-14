// find the sum if all elements in a given matrix
#include<iostream>
using namespace std;
int sum2DArray(int arr[][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j]; //mixing the array and b
        }
    }
    return sum;
}

int main() {
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;
    int result = sum2DArray(array, rows, cols);

    cout << "Sum of elements in the 2D array: " << result << endl;  // Output: 45

    return 0;
}