#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a word or sentence: ";
    getline(cin, str);  

    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
