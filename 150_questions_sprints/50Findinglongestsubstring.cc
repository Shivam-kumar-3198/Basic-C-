/*
Finding the Longest Substring Without Repeating Characters
Difficulty: Medium
Topics: String Manipulation, Sliding Window
Description: Write a program to find the longest substring without repeating characters in a given string.
Example:
Input: string = "abcabcbb"
Output: "abc"
Explanation: The longest substring without repeating characters is "abc".
*/
#include<iostream>
#include<unordered_set>
using namespace std;

string longestSubstring(string s){
    unordered_set<char> seen;
    int n = s.size();
    int start = 0, maxLen = 0, bestStart = 0;

    for(int end=0; end<n; end++){
        while(seen.find(s[end]) != seen.end()){
            seen.erase(s[start]);
            start++;
        }

        seen.insert(s[end]);

        if(end - start + 1 > maxLen){
            maxLen = end - start + 1;
            bestStart = start;
        }
    }

    return s.substr(bestStart, maxLen);
}

int main(){
    string str;
    cout<<"Enter a string : ";
    cin>> str;

    string result = longestSubstring(str);
    cout<<"Longest substring without repeating character : " << result<<endl;

    return 0;
}