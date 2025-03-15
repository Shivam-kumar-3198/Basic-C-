/*
4. Switch Case
Challenge: Write a program that lets the user select a tea type from a menu. Use a swit
price based on the selected tea:* Green Tea: $2
• Black Tea: $3
• Oolong Tea: $4
*/
#include<iostream>
using namespace std;
int main(){
    int choice;
    double price;

    cout<<"Select your tea\n";
    cout<<"1.Green Tea\n";
    cout<<"2.Lemon Tea\n";
    cout<<"3.Oolong Tea\n";
    cout<<"Enter your choice in number : \n";

    cin>>choice;

    switch(choice){
        case 1 :
        price = 2.0;
        cout<<"Your have selected green Tea. and the price in rupees is "<<price<<"rs"<<endl;
        break;
        case 2 :
        price = 3.0;
        cout<<"You have selected Lemon Tea. and the price in rupees is "<<price<<"rs"<<endl;
        break;
        case 3 :
        price = 4.0;
        cout<<"Your selected OOlong Tea. and the price in rupees is "<<price<<"rs"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        break;
    }

    return 0;
}