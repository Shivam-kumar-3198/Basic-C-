#include<iostream>
using namespace std;
int main(){
    int teaBags;

    cout<<"Enter the number of tea bags you have :";
    cin>>teaBags;

    if(teaBags<10){
           teaBags += 5;
           
    }

    cout<<"your total bags are : "<<teaBags<<endl;
    cout<<"Final answer is recieved."<<endl;
   return 0;
}