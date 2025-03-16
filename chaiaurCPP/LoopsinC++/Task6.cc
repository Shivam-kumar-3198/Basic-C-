#include<iostream>
#include<string>

using namespace std;

int main(){
    string teaTypes[5] = {"OOlong tea", "Orange Tea","Green Tea", "Black Tea"};
    

    for(int i=0; i<5; i++){
        cout<<"Brewing " <<teaTypes[i]<<"..." <<endl;

        for(int j=1; j<3;j++){
            cout<<"Brewing" << j<<" Cup of" <<teaTypes[i] <<endl;
        }
    }
    return 0;
}