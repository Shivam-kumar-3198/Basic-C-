// find the doublet in the array whose sum is equal to the given value x
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findDoublets(const vector<int>& arr, int x) {
    unordered_set<int> seen; // To store complements
    bool found = false;

    for (int num : arr) {
        int complement = x - num; // Find the required complement
        if (seen.find(complement) != seen.end()) {
            cout << "Doublet: (" << complement << ", " << num << ")\n";
            found = true;
        }
        seen.insert(num); // Add the current number to the set
    }

    if (!found) {
        cout << "No doublets found with sum " << x << endl;
    }
}

int main() {
    vector<int> arr = {1, 4, 7, 10, 2, 5};
    int x;

    cout << "Enter the target sum: ";
    cin >> x;

    findDoublets(arr, x);

    return 0;
}
