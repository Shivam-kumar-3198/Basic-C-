// Input a string of length n and count all the vowels in the given string
// #include<iostream>
// using namespace std;
// int main(){
//     string s = "Shivam is the best coder";
//     int n = s.length();
//     for(int i=0; i<n; i++){
//         cout<<s[i];
//     }
// }

#include<iostream>
using namespace std;
int main(){
    string s = "Cow is the domestic animal";
    int count = 0;
    for(int i=0;i<s.length(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout<<count;
}