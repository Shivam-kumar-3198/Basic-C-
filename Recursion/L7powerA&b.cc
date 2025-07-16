#include<iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1; //base case
    if (b == 1) return a;

    int ans = power(a, b / 2);  //Recursive call

    if (b % 2 == 0) //if b is even
        return ans * ans;
    else
        return a * ans * ans;
}

int main() {
    int a, b;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the power b: ";
    cin >> b;

    int result = power(a, b);
    cout << a << " raised to the power " << b << " is: " << result << endl;

    return 0;
}