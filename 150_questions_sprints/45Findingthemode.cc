/*
Finding the Mode of Numbers in an Array
Difficulty: Medium
Topics: Arrays, Statistical Analysis
Description: Write a program to find the mode (most frequent number) in an array.
Example:
Input: array = [1, 2, 2, 3, 4, 4, 4]
Output: 4
Explanation: The most frequent number in the array is 4.
*/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int findMode(vector<int>& arr){
    unordered_map<int, int> freq;
    int mode = arr[0];
    int maxCount =0;

    for(int num:arr){
        freq[num]++;  // count frequency
        if (freq[num] > maxCount) {
            maxCount = freq[num];
            mode =num;
        }
    }
    return mode;
}

int main(){
    vector<int> array = {1,2,2,3,4,4,4};

    cout<<" Mode : "<<findMode(array)<<endl;

    return 0;
}