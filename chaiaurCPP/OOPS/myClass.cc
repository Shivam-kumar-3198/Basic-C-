#include<iostream>
#include<vector>
using namespace std;

class Sam{
    //data members
    string teaName; //name of the tea
    int servings; //Number of servings
    vector<string> ingredients   // List of ingrediets for the tea

    //Memeber function

    void displaySam(){
        cout<<"Tea name : " <<teaName <<endl;
        cout<<"Servings : " <<servings <<endl;
        
    }
};

int main(){
    

    return 0;
}