/*
Checking for an Anagram
Difficulty: Easy
Topics: String Manipulation
Description: Write a program to check if two strings are anagrams.
Example:
Input: string1 = "listen", string2 = "silent"
Output: True
Explanation: "listen" and "silent" are anagrams of each other.
*/


#include<iostream>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length() == str2.length()){
        return true;
    }
    else{
        return false;
    }

}

int main(){
  string word1,word2;
  cout<<"Enter the first word you want to check for anagram : ";
  cin>>word1;
  cout<<"Enter the second word you want to check that it's length is equal to first word: ";
  cin>>word2;

  if(isAnagram(word1,word2))
    cout<<"The words are anagrams : "<<endl;

    else
    cout<<"The words are not anagram : "<<endl;

   return 0;
  
}