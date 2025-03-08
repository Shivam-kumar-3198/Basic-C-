/*
A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge,
 and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive
  based on the number of cups they buy
*/

#include<iostream>
using namespace std;
int main(){

    int teaCup;
    cout<<"Enter the numbers of teaCup you want to buy : ";
    cin>>teaCup;

    if(teaCup > 20){
        cout<<"Favourite Customer you have Recived a Gold badge "<<endl;
    }
    else if(teaCup <= 20){
        cout<<"silver badge"<<endl;
    }
}