#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return the indices when the target is found
                }
            }
        }
        return {}; // Return an empty vector if no solution exists
    }
};

int main() {
    vector<int> nums;
    int target, n;

    // Input array size and elements
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cerr << "Error: The number of elements must be at least 2." << endl;
        return 1; // Exit with error code
    }

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // Input target value
    cout << "Enter the target value: ";
    cin >> target;

    // Create a Solution object and call twoSum
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    // Output the result
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution exists for the given input." << endl;
    }

    return 0;
}
