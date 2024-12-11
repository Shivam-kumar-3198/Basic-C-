#include<iostream>
using namespace std;
int main(){
     int n = 10;

     int a;
     int b;
     cout<<"Enter a Number a : ";
     cin>>a;
     cout<<"Enter a Number b : ";
     cin>>b;


     cout<<a<<" "<<b<<" ";

     for(int i=1; i<=n; i++){
        int nextnumber = a+b;
        cout<<nextnumber<<" ";

        a=b;
        b=nextnumber;
     }


}