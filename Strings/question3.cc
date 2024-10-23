// Input a string of even length and reverse the first half of the string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Shivam";
    cout<<s<<endl;
    int n = s.length(); 
    int i = 0;
    int j = n/2 -1;

    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}