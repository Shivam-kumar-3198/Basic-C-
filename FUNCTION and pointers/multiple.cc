#include<iostream>
using namespace std;

void usa(){
    cout<<"You are in american server";
    cout<<"Welcome to Los Angelos";
    return;
}

void india(){
    cout<<"You are in Indian Server";
    cout<<"Welcome to Mumbai";
    usa();
}

int main(){
    usa();
    india();
}