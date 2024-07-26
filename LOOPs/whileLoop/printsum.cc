#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    
    int sum = 0;
    while(n!=0){
        int ld = n%10;
        n = n/10; // n/=10
        sum += ld;
    }
    cout<<sum;
}
// #include<iostream>:

// This line includes the standard input-output stream library, which allows us to use cout and cin for output and input, respectively.
// using namespace std;:

// This line tells the compiler to use the standard namespace. It allows us to use names for objects and variables from the standard library without the std:: prefix.
// int main() {:

// This is the main function where the execution of the program begins.
// int n;:

// Declares an integer variable n that will store the number entered by the user.
// cout << "Enter number: ";:

// Outputs the prompt "Enter number: " to the console, asking the user to input a number.
// cin >> n;:

// Reads an integer value entered by the user from the console and stores it in the variable n.
// int sum = 0;:

// Declares and initializes an integer variable sum to 0. This variable will store the sum of the digits of the number.
// while(n != 0) {:

// Starts a while loop that will continue to execute as long as n is not equal to 0.
// int ld = n % 10;:

// Declares an integer variable ld (which stands for last digit) and assigns it the value of n % 10. The % operator gives the remainder when n is divided by 10, which is the last digit of n.
// n = n / 10; // n /= 10:

// Updates the value of n by removing its last digit. This is done by dividing n by 10. The // n /= 10 is a comment suggesting an alternative shorthand notation for the same operation.
// sum += ld;:

// Adds the value of ld (the last digit of n) to the sum.
// }:

// Ends the while loop.
// cout << sum;:

// Outputs the value of sum to the console. This will be the sum of the digits of the original number entered by the user.
// }:

// Ends the main function.