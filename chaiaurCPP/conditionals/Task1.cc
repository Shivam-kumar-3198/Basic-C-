/*
 1. If Statement
Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the
program should confirm their order.
*/

#include<iostream>
#include<string>
using namespace std;
// int main(){
//     int greenTea;
//     cout<<"Enter type of tea you want to order : "<<endl;
//     cin>>greenTea;

//     if(greenTea){
//         cout<<"Order succesfull"<<endl;
//     }
//     return 0;
// }
int main(){
    string teaOrder;
    cout<<"Enter your tea order : ";
    getline(cin, teaOrder);  //here you can get string stored in getline paramter

    if(teaOrder == "Green Tea"){
        cout<<"Order Confirmed"<<endl;
    }
}