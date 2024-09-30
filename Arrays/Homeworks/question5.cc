/* Given an array of integers, change the value of all
odd indexed elements to its second multiple and increment 
all even indexed value by 10 */

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "The even arrays are : " << endl;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 10;  // Add 10 to even numbers
            cout << arr[i] << " ";
        }
    }

    return 0;
}
