// Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on
// certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using
// assignment operators.

#include<iostream>
using namespace std;
int main(){
    
    int teaBags;
    cout<<"Enter the number of Tea bags you have : "<<endl;
    cin>>teaBags;
    
    
    if (teaBags<10){
        cout<<teaBags + 5<< " Five more added"<<endl;;
        cout<<"You have less teabags that's why we have added extra"<<endl;
    }

    else{
        cout<<"Good to go";
    }
    return 0;

}