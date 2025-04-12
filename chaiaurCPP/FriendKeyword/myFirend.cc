#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Chai{
    // here we have created a private functin
    private:
      string teaName;
      int servings;

    public:
      Chai(string name, int serve): teaName(name) , sergs(serve){}
      
      void display() const{
        cout<<"teaname : " <<teaName <<endl;
      }


}


int main(){
    Chai masalChai("Masala CHai", 4);
    Chai masalChai("Ginger CHai", 8);

    gingerChai.display();
    masalChai.display();

    if(){

    }
    else{

    }
}