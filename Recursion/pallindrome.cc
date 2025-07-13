// 153 = 1^3 + 5^3 + 3^3 = 1+125+27 =  153 //this is armstring

//we have to find pallindrome saas == saas 
#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(i>j)
    return true;

    if(str[i] != str[j])
    return false;
    else{
        return checkPalindrome(str, i+1,j-1);
    }
}
int main(){

    string name = "madam";
    cout<<endl;

    bool isPallindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPallindrome){
        cout<<"Its a pallindrome "<<endl;
    }
    else{
        cout<<"Its not a pallindrome" <<endl;
    }

}