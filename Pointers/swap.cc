#include<iostream>
using namespace std;
int main(){
    int x,y;
    x = 5;
    y = 6;
    cout<<x<<" "<<y<<endl;

    int tempo = x;
    x=y;
    y=tempo;
    cout<<"Value of x = "<<x<<" "<<"Value of Y = "<<y<<endl;

}