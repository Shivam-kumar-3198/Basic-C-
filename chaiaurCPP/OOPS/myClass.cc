#include <iostream> // Input-output functionalities ke liye library include kari.
#include <vector>    // Vector ke functionalities use karne ke liye library include kari.
using namespace std; // Namespace use kiya taaki std:: ko baar-baar na likhna pade.

class Sam // Class Sam define kiya. Class ek blueprint hoti hai objects banane ke liye.
{
public: // Public access specifier use kiya, taaki data members aur member functions accessible ho outside class.
    // Data members
    string teaName;            // Tea ka naam store karne ke liye variable.
    int servings;              // Kitne servings available hain, ye store karne ke liye variable.
    vector<string> ingredients; // Ingredients list store karne ke liye vector use kiya.

    // Member function
    void displaySam() // Ye function display karega tea ke details.
    {
        cout << "Tea name : " << teaName << endl; // Tea ka naam print karega.
        cout << "Servings : " << servings << endl; // Servings ka number print karega.
        cout << "Ingredients : "; // Ingredients ke naam ke header.

        for (string ingredient : ingredients) // Ingredients ko loop karke print karega ek-ek karke.
        {
            cout << ingredient << " "; // Ingredient print kiya aur space di.
        }
        cout << endl; // Line break ke liye.
    }

    // Agar private access chahiye to yaha rakha jaa sakta hai:
    // private: 
    // string name; 
};

int main() // Program ka execution yaha se start hoga.
{
    Sam chaiOne; // Sam class ka object chaiOne banaya.

    // Object ke members initialize kiye.
    chaiOne.teaName = "lemon tea"; // Tea ka naam set kiya.
    chaiOne.servings = 2;          // Servings set kiya.
    chaiOne.ingredients = {"Water", "Lemon", "Honey", "Tea"}; // Ingredients ka list set kiya.

    chaiOne.displaySam(); // Object ke displaySam() function ko call kiya taaki tea ke details print ho.
   
    Sam dayTwo;

    dayTwo.teaName = "Honey tea";
    dayTwo.servings = 10;
    dayTwo.ingredients = {"Water", "Milk", "Honey", "Tea leaves real gold"};

    dayTwo.displaySam();
    return 0; // Program successfully khatam ho gaya, to return 0 diya.
}