/*
Finding Missing Numbers in a Sequence
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find missing numbers in a sequence from 1 to n.
Example:
Input: sequence = [1, 2, 4, 5]
Output: [3]
Explanation: The missing number in the sequence from 1 to 5 is 3.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "🎉 Welcome to the Missing Number Finder! 🎉\n\n";

    bool keepRunning = true;
    while (keepRunning) {
        cout << "Choose mode:\n";
        cout << "  1. Exactly ONE missing number in 1…n\n";
        cout << "  2. One or MORE missing numbers in 1…n\n";
        cout << "Enter choice (1 or 2): ";
        int mode;
        cin >> mode;

        int n;
        cout << "\nEnter the maximum value n: ";
        cin >> n;

        cout << "Now enter all the numbers you have (separated by spaces):\n";
        cout << "(For mode 1 enter " << n - 1 << " numbers; for mode 2, enter as many as you like then type 0 to stop)\n";

        if (mode == 1) {
            // Sum-difference trick
            int expectedSum = n * (n + 1) / 2;
            int actualSum = 0, x;
            for (int i = 0; i < n - 1; i++) {
                cin >> x;
                actualSum += x;
            }
            cout << "\n👉 The missing number is: "
                 << (expectedSum - actualSum)
                 << "\n\n";
        }
        else if (mode == 2) {
            // Mark-present trick for multiple missing
            vector<bool> present(n + 1, false);
            int x;
            while (true) {
                cin >> x;
                if (x == 0) break;
                if (x >= 1 && x <= n)
                    present[x] = true;
                else
                    cout << "[!] Ignored out-of-range value: " << x << "\n";
            }

            cout << "\n👉 Missing number(s): ";
            bool any = false;
            for (int i = 1; i <= n; i++) {
                if (!present[i]) {
                    cout << i << " ";
                    any = true;
                }
            }
            if (!any) cout << "(none!)";
            cout << "\n\n";
        }
        else {
            cout << "\n[!] Invalid mode selection.\n\n";
        }

        cout << "Would you like to try again? (y/n): ";
        char again;
        cin >> again;
        keepRunning = (again == 'y' || again == 'Y');
        cout << "\n";
    }

    cout << "👍 Thanks for using the Missing Number Finder. Goodbye!\n";
    return 0;
}
