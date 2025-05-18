#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class
class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea constructor called: " << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method" << endl;
    }

    virtual void serve() const
    {
        cout << "Serving " << servings << " cup(s) of tea with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

// Derived class - GreenTea
class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "GreenTea constructor called" << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
    }

    ~GreenTea()
    {
        cout << "GreenTea destructor called" << endl;
    }
};

// Derived class - MasalaTea
class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "MasalaTea constructor called" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << " with spices and milk" << endl;
    }

    ~MasalaTea()
    {
        cout << "MasalaTea destructor called" << endl;
    }
};

int main()
{
    cout << "--- Creating GreenTea object ---" << endl;
    GreenTea g(2);
    g.brew();
    g.serve();

    cout << "\n--- Creating MasalaTea object ---" << endl;
    MasalaTea m(3);
    m.brew();
    m.serve();

    cout << "\n--- Program Ending ---" << endl;
    return 0;
}
