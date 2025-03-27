#include<iostream>
using namespace std;
int main(){
    int chaiTemperature[5] = {86, 98, 82, 90, 45};

    cout<<"Chai temperature : ";

    for(int i=1; i<=5; i++){
        cout<<chaiTemperature[i] << " degree C\n";

    }

    return 0;
}