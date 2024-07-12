#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer to show it is divisible by 5 or not :";
    cin >> n;

    if (n % 5 == 0)
    {
        cout << "It is divisible by 5";
    }

    else
    {
        cout << "It is not divisible by 5";
    }
}