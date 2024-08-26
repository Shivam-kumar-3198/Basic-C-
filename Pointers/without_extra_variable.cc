#include<iostream>
using namespace std;
int main(){
    int x,y;
    x=5;
    y=6;
    cout<<x<<" "<<y<<endl;

    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<endl;
}