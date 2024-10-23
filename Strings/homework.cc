// INput a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt funcitons
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Shivam";
    cout<<s<<endl;

    int n = s.length();
    reverse(s.begin() + 1 ,s.begin()+n);
    cout<<s<<endl;
}
