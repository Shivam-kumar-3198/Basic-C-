/*
3. Nested If-Else
Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the
number of cups ordered and applies a discount:* More than 20 cups: 20% discount
• Between 10 and 20 cups: 10% discount
• Less than 10 cups: No discount
* Pull up for precise seeking
*/

#include<iostream>
using namespace std;
int main(){
    int teaCups;
    cout<<"Enter the number of teacups you want to order : ";
    cin>>teaCups;

    if(teaCups > 20){
        cout<<"20 percent discount is availed "<<endl;
    }
    else if(teaCups >= 10 && teaCups<=20){
        cout<<"10 percent discount availed "<<endl;
    }
    else if (teaCups < 10){
        cout<<"No discount" <<endl;
    }
    else{
        cout<<"Try another"<<endl;
    }
    return 0;
}