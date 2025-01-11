#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 6};  // Example input, you can modify this as needed
    int ans = 0;

    // XOR all the elements in the array
    for(int val : nums){
        ans = ans ^ val;
    }

    // After XOR-ing all numbers, the result will be the repeated number
    cout << "The repeated value is " << ans << endl;

    return 0;
}

/*
 XOR
 0^0 = 0;
 1^1 = 0;

 0^1 = 1;
 1^0 = 0;
*/