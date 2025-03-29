#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shivam {
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    // Constructor
    Shivam() {
        teaName = "Masala Chai";
        servings = 2;
        ingredients = {"Tea Leaves", "Milk", "Sugar", "Spices"};
        cout << "Constructor Called" << endl;
    }

    // Method to display details
    void displayShivamDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (const string& ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main() {
    Shivam defaultChai;  // Create an object of the Shivam class
    defaultChai.displayShivamDetails();  // Call the method to display details
    return 0;
}