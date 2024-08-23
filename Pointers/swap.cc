#include<iostream>
using namespace std;
int main(){
    int x,y;
    x = 5;
    y = 6;
    cout<<x<<" "<<y<<endl;

    int temp = x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;

}