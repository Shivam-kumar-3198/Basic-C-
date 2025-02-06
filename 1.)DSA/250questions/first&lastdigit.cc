// program to find first and last digit of any number
#include <iostream>
using namespace std;

void printFirstLastDigit() {
    int num, last;
    cout << "Enter any number: ";
    cin >> num;

    last = num % 10;  // Extract the last digit

    while (num >= 10) {
        num = num / 10;  // Extract the first digit
    }

    cout << "The first digit of the entered number: " << num << endl;
    cout << "The last digit of the entered number: " << last << endl;
}

int main() {
    printFirstLastDigit();  // Call the function
    
    cout<<"Enter number again : "<<endl;
    printFirstLastDigit();
    return 0;
}
