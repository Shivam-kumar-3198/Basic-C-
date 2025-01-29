// Program to find eligibility of admission
#include<iostream>
using namespace std;

int main() {
    int candidateAge;
    
    // Input the age of the candidate
    cout << "Input the age of the candidate: ";
    cin >> candidateAge;

    // Check eligibility for voting
    if (candidateAge < 18) {
        cout << "Sorry, you are not eligible to cast your vote." << endl;
        cout << "You will be able to cast your vote after " << 18 - candidateAge << " year(s)." << endl;
    } else if (candidateAge == 18) {
        cout << "Congratulations! You are just eligible to cast your vote. also get lost" << endl;
    } else {
        cout << "Congratulations! You are eligible to cast your vote." << endl;
    }

    return 0;
}