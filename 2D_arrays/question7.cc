// Given a matrix 'a' of dimension n X m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of rectangle 
// from (l1,r1) to (l2,r2).
#include <iostream>
#include <vector>
using namespace std;

// Function to compute the 2D prefix sum matrix
vector<vector<int>> computePrefixSum(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    // Initialize a prefix sum matrix with an extra row and column (for 1-based indexing)
    vector<vector<int>> prefixSum(n + 1, vector<int>(m + 1, 0));
    
    // Build the prefix sum matrix
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prefixSum[i][j] = matrix[i - 1][j - 1] 
                            + prefixSum[i - 1][j] 
                            + prefixSum[i][j - 1] 
                            - prefixSum[i - 1][j - 1];
        }
    }
    
    return prefixSum;
}

// Function to calculate the sum of a submatrix (l1, r1) to (l2, r2)
int rectangleSum(const vector<vector<int>>& matrix, int l1, int r1, int l2, int r2) {
    vector<vector<int>> prefixSum = computePrefixSum(matrix);
    
    // Apply the inclusion-exclusion principle to get the sum of the rectangle
    int result = prefixSum[l2 + 1][r2 + 1] 
               - prefixSum[l1][r2 + 1] 
               - prefixSum[l2 + 1][r1] 
               + prefixSum[l1][r1];
    
    return result;
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Coordinates for the top-left (l1, r1) and bottom-right (l2, r2) of the submatrix
    int l1 = 1, r1 = 1, l2 = 2, r2 = 2;
    
    // Calculate the sum of the rectangle
    int result = rectangleSum(matrix, l1, r1, l2, r2);
    
    cout << "The sum of the rectangle is: " << result << endl;  // Output: 28
    
    return 0;
}
