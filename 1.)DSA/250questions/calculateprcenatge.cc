// calculate the total marks, percentage and division
#include <iostream>
#include <string>

using namespace std;

int main() {
    int rollno, phy, chem, it, total;
    float percentage;
    string name, div;

    cout << "Input the roll number of the student: ";
    cin >> rollno;

    cout << "Input the name of the student: ";
    cin.ignore(); // To ignore any leftover newline character in the input buffer
    getline(cin, name);

    // Input marks
    cout << "Input the marks of Physics, Chemistry, and Information Technology: ";
    cin >> phy >> chem >> it;

    // Validate marks
    if (phy < 0 || phy > 100 || chem < 0 || chem > 100 || it < 0 || it > 100) {
        cout << "Error: Marks should be between 0 and 100!" << endl;
        return 1; // Exit the program due to invalid input
    }

    // Calculate total and percentage
    total = phy + chem + it;
    percentage = total / 3.0;

    // Determine division
    if (percentage >= 60)
        div = "First";
    else if (percentage >= 48)
        div = "Second";
    else if (percentage >= 36)
        div = "Pass";
    else
        div = "Fail";

    // Display results
    cout << "\n------ Student Report ------\n";
    cout << "Roll Number: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks in Physics: " << phy << endl;
    cout << "Marks in Chemistry: " << chem << endl;
    cout << "Marks in IT: " << it << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Division: " << div << endl;

    return 0;
}
