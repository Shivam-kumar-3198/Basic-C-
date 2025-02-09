// Program to convert string to lower case

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char string[100];
    cout<<"Input a string to convert to lower case"<<endl;
    cin.getline(string,100);

    cout<<"Character in lowercase :"<<strlwr(string);
    cout<<"Character in lowercase :"<<strlwr(string);


    // strlwr is used to convert upper case character to lower case 
    return 0;

}