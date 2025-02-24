#include <iostream>
#include <cmath>  // Use cmath instead of math.h in C++
using namespace std;

int main() {
    int lower, higher;
    cout << "Enter two numbers : here now : ";
    cin >> lower >> higher;

    cout << "Armstrong numbers between " << lower << " and " << higher << " are:\n";
    cout<<"Going good"<<endl;;

    for (int i = lower; i <= higher; i++) {
        int temp1 = i, temp2 = i, remainder, n = 0, result = 0;
        
        // Count the number of digits
        while (temp1 != 0) {
            temp1 /= 10;
            ++n;
        }

        // Calculate sum of nth power of digits
        while (temp2 != 0) {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        // Check if the number is Armstrong
        if (result == i) {
            cout << i << endl;
        }
    }

    return 0;
}
