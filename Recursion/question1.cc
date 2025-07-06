#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0)
        return 1;

    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main(){
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}

/*
🔢 Code Summary:
Yeh program ek number n ka factorial calculate karta hai using recursion.

Example:

Input: 5

Output: 120 (since 5! = 5 × 4 × 3 × 2 × 1)

🧠 Concept Samjho: Factorial
Factorial of n (written as n!) ka matlab hai:

Copy
Edit
n! = n × (n-1) × (n-2) × ... × 1
Special case:

cpp
Copy
Edit
0! = 1  // by definition
🧩 Function Breakdown:
cpp
Copy
Edit
int factorial(int n){
    if(n == 0)
        return 1;
    
    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}
Line by line samjho:

Base Case:

cpp
Copy
Edit
if(n == 0)
    return 1;
➤ Jab n = 0, toh factorial 1 return karo. Ye base case hai jo recursion ko stop karta hai.

Recursive Call:

cpp
Copy
Edit
int smallerProblem = factorial(n - 1);
➤ Function khud ko call karta hai with n-1.

Multiplication Step:

cpp
Copy
Edit
int biggerProblem = n * smallerProblem;
➤ Current number n ko uske chhote factorial se multiply karte hain.

Return:

cpp
Copy
Edit
return biggerProblem;
➤ Final result return kar diya jata hai.

🧮 Dry Run Example (n = 3):
matlab
Copy
Edit
factorial(3)
→ 3 * factorial(2)
→ 3 * (2 * factorial(1))
→ 3 * (2 * (1 * factorial(0)))
→ 3 * 2 * 1 * 1 = 6
💡 Main Function:
cpp
Copy
Edit
int main(){
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}
Input lete hain: cin >> n

Function call karte hain: factorial(n)

Output dikhate hain: cout << ans

📝 Important Points for Revision:
Recursion mein base case zaruri hota hai.

Function khud ko call karta hai with smaller input.

Stack ke through har call return hone ke baad final answer milta hai.

Factorial ka base case: 0! = 1.
*/