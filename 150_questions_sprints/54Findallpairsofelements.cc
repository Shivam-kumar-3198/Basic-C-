/*
Finding All Pairs of Elements in an Array that Add Up to a Given Sum
Difficulty: Medium
Topics: Arrays, Hashing
Description: Write a program to find all pairs of elements in an array whose sum equals a specified target.
Example:
Input: array = [1, 2, 3, 4, 5], target = 5
Output: [(1, 4), (2, 3)]
Explanation: Pairs that sum up to 5 are (1, 4) and (2, 3).
*/
#include<iostream>
#include<vector>
using namespace std;

vector<pair<int, int>> findPairsBruteForce(vector<int> & arr, int target){
    vector<pair<int, int>> pairs;
    int n= arr.size();


for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i] + arr[j] == target){
            pairs.push_back({arr[i], arr[j]});
        }
    }
}
return pairs;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int target=5;

    vector<pair<int, int>> result = findPairsBruteForce(arr, target);

    for(auto &p : result){
        cout<<"(" << p.first << ", " << p.second << ") ";
    }
    return 0;
}