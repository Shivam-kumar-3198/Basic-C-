#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Shivam is the best" ;
    cout<<s<<endl;
    // int n = s.length();
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}