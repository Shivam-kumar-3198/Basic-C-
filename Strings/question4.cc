#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Shivam";
    cout<<s<<endl;
    int n = s.length(); 
    reverse(s.begin(),s.begin()+2);
    cout<<s<<endl;
}