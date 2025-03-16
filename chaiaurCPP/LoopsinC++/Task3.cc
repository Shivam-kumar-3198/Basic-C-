/*
3. For Loop
Challenge: Write a program that prints the brewing instructions for
making 5 cups of tea. The brewing process should be printed once
for each cup using a for loop.
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
     int teaCups = 1000;

     for(int i=1;/*Here I is taken because loop is also called iteration*/i<1000; i++){
        cout<<"Brewing "<<i<<" a cup of tea"<<endl;
     }

     return 0;
}