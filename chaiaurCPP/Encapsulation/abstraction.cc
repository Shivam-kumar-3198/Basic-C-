#include<iostream>
#include<string>
using namespace std;

class Tea{
    public:
        virtual void preparedIngredients() = 0;
        virtual void brew() = 0;
        virtual void serve() = 0;
    
    //In abstract class internal details are not vulnerable
    void makeTea(){
        preparedIngredients();
        brew();
        serve();
    }    
};

//derived class
 class GreenTea : public Tea{
    public:
    void preparedIngredients() override{
       cout<<"Green leaves and water is ready"<<endl;
    }

    void brew() override{
        cout<<"Gree Tea brewed "<<endl;
    }

    void serve() override{
        cout<<"Green Tea Served"<<endl;
    }
 };



 int main(){
    
    GreenTea greenTea;
    

    greenTea.makeTea();
    

    return 0;

 }
