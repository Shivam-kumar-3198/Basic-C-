/*
Finding the Largest Palindrome in a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to find the largest palindrome in a given string.
Example:
Input: string = "babad"
Output: "bab" or "aba"
Explanation: Both "bab" and "aba" are valid palindromes in the string.
*/
#include <iostream>
using namespace std;

bool isPallindrome(string str, int s, int e)
{
    while (s < e)
    {
        if (str[s] != str[e])
        {
            return false;
        }

        s++;
        e--;
    }
    return true;
}

void getLongestPallindrome(string str){

    int n = str.length();
    int maxLen = 0;
    int start = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           if(isPallindrome(str,i,j) && (j-i+1)>maxLen){
              maxLen=j-i+1;
              start=i;
                 

           }
        }
    }
   cout<<str.substr(start, maxLen);
      
}

int main(){
 string str="babad";
 getLongestPallindrome(str);
 return 0;

 


}