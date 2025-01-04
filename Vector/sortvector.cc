#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the reverse function
using namespace std;

int main() {
    vector<int> v(5);

    // Input values into the vector
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    // Output the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Reverse the vector
    reverse(v.begin(), v.end());

    // Output the reversed vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
