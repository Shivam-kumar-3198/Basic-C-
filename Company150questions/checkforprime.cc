#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number a : ";
    cin>>a;
    cout<<"What are you thinking ";

    if(a<2){
        cout<<a<<" is not a prime number ";
        return 0;
    }

    bool isPrime = true;
    for(int i=2; i*i<+a;i++){
        if(a%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<a<<" is a Prime Number ";
    }
    else{
        cout<<a<<" is not a Prime Number";
    }
}
/*
Why 1 is NOT Prime:
It has only one divisor

The number 1 is only divisible by itself (1).
A prime number must have exactly two distinct divisors (1 and itself).
Mathematical Consistency

If 1 were prime, many theorems in number theory (like the Fundamental Theorem of Arithmetic) would break.
The theorem states that every number can be uniquely factored into prime numbers. If 1 were prime, factorizations would not be unique.

Let's say 12 = 2 × 2 × 3 (Prime Factorization)
If 1 were prime, we could write:
12 = 1 × 2 × 2 × 3 or 12 = 1 × 1 × 2 × 2 × 3, etc.
This would break the uniqueness of prime factorizations.
*/