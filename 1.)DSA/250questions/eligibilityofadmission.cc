// Program to find eligibility of admission
#include<iostream>
using namespace std;
int main(){
    int candidateAge;
    cout<<"Input the age of the candidate : ";
    cin>>candidateAge;

    if(candidateAge < 18){
        cout<<"Sorry, you are not eligible to caste your vote : ";
        cout<<"You would be able to caste your vote after 18 " <<18-candidateAge<<"year"<<endl;
    
    }
}