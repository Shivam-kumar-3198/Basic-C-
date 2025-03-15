/*
1. While Loop
Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made,
decrease the number of cups remaining. The loop
should run until all cups are served.
*/
#include<iostream>
#include<string>

using namespace std;
int main(){
    int teaCups;

    cout<<"Enter the number of Tea Cups to serve : ";
    cin>>teaCups;

    while (teaCups >= 0)
    {
       cout<<"Serving a cup of tea \n"<<teaCups<<" remaining"<<endl;
       teaCups--;
    }

    cout<<"All tea cups are served "<<endl;
    
    return 0;


    
}
