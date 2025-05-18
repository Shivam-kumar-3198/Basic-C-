#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base class, parent class

class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea constructor called " << teaName << endl;
    }

    virtual void brew() const()
    {
        cout << "Brewing " << teaName << "with generic method" << endl;
    }

    virtual void serve() const()
    {
        cout << "Serving " << servings << "cup of tea with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }

};

class GreenTea: public Tea{
    public:
    GreenTea(int servings): Tea("Green Tea", serve){
        cout<<"Green tea constructor called" <<endl;
    }

    void brew() const override{
        cout<<"Brewing " <<teaName <<"by steeping green tea leaves" <<endl;
    } 

    

}
