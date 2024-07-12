#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number:";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "It is a even Number"<<endl;
        cout << "Go with 2";
    }

    else
    {
        cout << "It is odd" << endl;
        cout << "You are going good";
    }
}