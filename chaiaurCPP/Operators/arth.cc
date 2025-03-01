#include<iostream>
using namespace std;

int main() {
    int cups;
    double pricePerCup, totalPrice, discountPrice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    if (totalPrice > 10) {
        discountPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is: " << discountPrice << endl;
    } else {
        cout << "Total price is: " << totalPrice << endl;
    }

    return 0;
}
