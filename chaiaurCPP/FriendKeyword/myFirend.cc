#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Chai {
private:
    string teaName;
    int servings;  // Fixed the spelling

public:
    Chai(string name, int serve) : teaName(name), servings(serve) {}  // Fixed the member variable

    friend bool compareServings(const Chai &chai1, const Chai &chai2);

    void display() const {
        cout << "Tea name: " << teaName << endl;
    }
};

bool compareServings(const Chai &chai1, const Chai &chai2) {
    return chai1.servings > chai2.servings;  // Added missing semicolon
}

int main() {
    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai", 8);

    gingerChai.display();
    masalaChai.display();

    if (compareServings(masalaChai, gingerChai)) {
        cout << "Masala Chai has more servings." << endl;
    } else {
        cout << "Masala Chai has fewer servings." << endl;
    }

    return 0;
}