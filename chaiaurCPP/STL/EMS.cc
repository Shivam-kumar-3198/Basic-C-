// 

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: $ " << emp.salary << endl;
}

// Comparator for sorting
bool compareSalaryDesc(const Employee& e1, const Employee& e2) {
    return e1.salary > e2.salary;
}

// Predicate for high earners
bool isHighEarner(const Employee& e) {
    return e.salary > 50000;
}

// Accumulator function
double salaryAdder(double sum, const Employee& e) {
    return sum + e.salary;
}

// Comparator for max_element
bool compareSalaryAsc(const Employee& e1, const Employee& e2) {
    return e1.salary < e2.salary;
}

int main() {
    vector<Employee> employees;
    employees.push_back(Employee{101, "Shivam", 100000});
    employees.push_back(Employee{102, "Alice", 50000});
    employees.push_back(Employee{103, "Brown", 70000});
    employees.push_back(Employee{104, "Ned", 60000});
    employees.push_back(Employee{105, "Rhymen", 80000});

    sort(employees.begin(), employees.end(), compareSalaryDesc);
    cout << "Employees Sorted by Salary -> Highest to Lowest\n";
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;
    remove_copy_if(employees.begin(), employees.end(), back_inserter(highEarners), not1(ptr_fun(isHighEarner)));

    cout << "\nEmployees Who Are High Earners:\n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, salaryAdder);
    double averageSalary = totalSalary / employees.size();

    vector<Employee>::iterator highestPaid = max_element(employees.begin(), employees.end(), compareSalaryAsc);

    cout << "\nAverage Salary: $" << averageSalary << endl;

    if (highestPaid != employees.end()) {
        cout << "Highest Paid Employee: ";
        displayEmployee(*highestPaid);
    }

    return 0;
}
