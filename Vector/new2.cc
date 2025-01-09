#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>abc;

    abc.push_back(25);
    abc.push_back(35);
    abc.push_back(45);

    cout<< "after push back size = " <<abc.size() <<endl;

    for(int val : abc){ // using char value here is wrong 
        cout<<val<<endl;
    }
    return 0;
}