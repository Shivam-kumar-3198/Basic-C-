#include <iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>abc;

    abc.push_back(13);
    abc.push_back(12);
    abc.push_back(11);

    cout<<abc.capacity()<<endl;
    cout<<abc.size();
}