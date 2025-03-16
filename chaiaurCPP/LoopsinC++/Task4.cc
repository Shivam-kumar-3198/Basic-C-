#include <iostream>
#include <string>

using namespace std;

int main()
{
    string respnse;

    while (true)
    {
        cout << "dO YOU WANT MORE TEA (type 'stop' to exit)";
        getline(cin, respnse);
        
        

        if (respnse == "stop" || respnse == "no")
        {
            break;
        }
        cout << "Here is your another cup of tea";
    }
    cout << "Thankyou for choosing us" << endl;

    return 0;
}