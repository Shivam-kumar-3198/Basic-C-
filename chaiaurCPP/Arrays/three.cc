#include<iostream>
using namespace std;

int* prepareChaiOrders(int cups) {
    int* orders = new int[cups];
    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10; // Each cup has increasing amounts of chai
    }
    return orders;
}

int main() {
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++) {
        cout << "Cup " << (i + 1) << " has " << chaiOrder[i] << " ml" << endl;
    }

    // Free dynamically allocated memory
    delete[] chaiOrder;

    return 0;
}