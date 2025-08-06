/*
Checking if a Number is a Narcissistic Number
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to check if a number is a narcissistic number
(where the sum of its digits raised to the power of the number of digits equals
the number itself).
Example:
Input: number = 153
Output: Narcissistic Number
Explanation: 153 is a narcissistic number because 1^3 + 5^3 + 3^3 = 153.
*/
/*
narcissistic number (also known as an Armstrong number) is a number that is equal to the
sum of its own digits each raised to the power of the number of digits.

🔢 Definition (Simple Words):
Let a number have n digits. If the sum of each digit raised to the power n equals the
original number, then it's a narcissistic number.
*/
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     bool isNarcissistic(int num)
//     {
//         int original = num;
//         int n = 0;
//         int temp = num;

//         while (temp > 0)
//         {
//             temp /= 10;
//             n++;
//         }

//         int sum = 0;
//         temp = num;

//         while (temp > 0)
//         {
//             int digit = temp % 10;
//             sum += pow(digit, n);
//             temp /= 10;
//         }

//         return sum == original;
//     }
// }

// int main()
// {
//     int number;
//     cout << "Enter a number : ";
//     cin >> number;

//     if (isNarcissistic(number))
//     {
//         cout << number << "is a Narcisstic number." << endl;
//     }
//     else
//     {
//         cout << number << " is Not a Narcissitic number." << endl;
//     }

//     return 0;
// }
#include <iostream>   // iostream library include kiya input/output ke liye
using namespace std;  // std namespace use kar rahe hain, taaki baar-baar std:: na likhna pade

// isNarcissistic function number check karega
bool isNarcissistic(int num)
{
    int original = num;     // original number ko store kiya taaki baad mein compare kar saken
    int n = 0;              // digit count rakhne ke liye variable
    int temp = num;         // temp variable banaya taaki num ko modify na karein

    if (num == 0) return true;  // agar number 0 hai to directly true return karo

    // Digits count karne ke liye loop
    while (temp > 0) {
        temp /= 10;   // last digit hatao (integer division)
        n++;          // ek digit count mein add karo
    }

    int sum = 0;      // powered digits ka sum rakhne ke liye
    temp = num;       // temp ko dobara original number set kiya

    // Debug header print karo
    cout << "Checking " << num << " (" << n << " digits)\n";

    // Har digit ke liye
    while (temp > 0) {
        int digit = temp % 10;   // last digit nikal li

        // Integer power calculate karne ke liye
        int p = 1;              
        for (int i = 0; i < n; i++) 
            p *= digit;         // p = digit^n

        sum += p;                // running sum mein add karo

        // Debug info print karo
        cout << "  digit: " << digit
             << "  digit^" << n << " = " << p
             << "  running sum = " << sum << "\n";

        temp /= 10;              // last digit hatao
    }

    // Final sum print karo
    cout << "Final sum = " << sum << "\n\n";
    return sum == original;     // check karo sum original ke barabar hai ya nahi
}

int main()
{
    int number;                               // user se input lene ke liye variable
    cout << "Enter a number: ";               // prompt print kiya
    cin >> number;                            // number input liya

    // result ke hisaab se message print karo
    if (isNarcissistic(number))
        cout << number << " is a Narcissistic number." << endl;
    else
        cout << number << " is NOT a Narcissistic number." << endl;

    return 0;   // program successful execute hone ke baad return
}

