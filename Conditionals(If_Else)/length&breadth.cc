#include <iostream>
using namespace std;

// Utility function to calculate the area of a rectangle
int areaRectangle(int length, int width) {
    return length * width;
}

// Utility function to calculate the perimeter of a rectangle
int perimeterRectangle(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length = 5;
    int width = 6;

    cout << "Area = " << areaRectangle(length, width) << endl;
    cout << "Perimeter = " << perimeterRectangle(length, width) << endl;

    return 0;
}