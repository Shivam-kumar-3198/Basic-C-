/*
Finding Prime Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find all prime numbers within a given range.
Example:
Input: range = [10, 30]
Output: [11, 13, 17, 19, 23, 29]
Explanation: Prime numbers between 10 and 30 are 11, 13, 17, 19, 23, and 29.
*/
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter the number you want to check is it prime number or not : ";
//       cin>>n;

//       if(n%1==0 && n%n==0){
//         cout<<n<<" is the Prime number."<<endl;
//       }
//       else{
//         cout<<n<<" is not a prime number.";
//       }
// }
#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i=2; i*i <= num; i++){
        if(num%i==0)
        return false;
    } 
    return true;
}

int main(){
    int start, end;
    cout<<"Enter the starting number of the reange : ";
    cin>>start;

    cout<<"Enter the ending number of the range : ";
    cin>>end;

    cout<<"Prime numbers between " <<start <<" and " << end << " are : ";

    for(int i= start; i<=end; i++){
        if(isPrime(i)){
            cout<<i<< " ";

        }
    }
    cout<<endl;
    return 0;

}