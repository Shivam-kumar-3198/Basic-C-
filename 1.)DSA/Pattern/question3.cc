#include <iostream>
using namespace std;

int main() {
    int n = 6;

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i; // Start character changes with each row
        for (int j = 0; j < n; j++) {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}