#include<iostream>
using namespace std;
int main(){
     int n = 10;

     int a=1;
     int b=2;

     for(int i=1; i<=n; i++){
        int nextnumber = a+b;
        cout<<nextnumber<<" ";

        a=b;
        b=nextnumber;
     }


}