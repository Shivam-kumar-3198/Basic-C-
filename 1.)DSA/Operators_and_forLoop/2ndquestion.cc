/*int i=3, a=2;
  sum = a + (i++);
  sum = 2+3 = 5
  now value of I will be 4 
  This is Post increment
*/ 

#include<iostream>
using namespace std;
int main(){
    int i = 7;

    cout<<i++<<endl;
    cout<<++i<<endl;
    cout<<i--<<endl;
    cout<<--i<<endl;
}