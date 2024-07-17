#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Marks :";
    cin>>n;

    if(n>=81 and n<=100){
        cout<<"Very good marks";
    }

    if(n>=61 and n<=80){
        cout<<"Good marks";
    }

    if(n>=41 and n<=60){
        cout<<"Average";
    }

    else if(n<=40 ){
        cout<<"NOT PASS";
    }


}