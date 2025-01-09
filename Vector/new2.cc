#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>abc;
    
    // Concept of push back
    abc.push_back(25);
    abc.push_back(35);
    abc.push_back(45);
    abc.push_back(75);
    abc.push_back(95);
    abc.push_back(15);

    cout<< "after push back size = " <<abc.size() <<endl;
    
    // Concept of pop back
    abc.pop_back();
    abc.pop_back();
    abc.pop_back();

    for(int val : abc){ // using char value here is wrong 
        cout<<val<<endl;
    }
    return 0;
}