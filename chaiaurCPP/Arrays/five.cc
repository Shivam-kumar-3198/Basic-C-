#include <iostream>
using namespace std;

int main()
{
    int chaiSales[3][7] = {
        {50, 60, 69, 70, 45, 12, 17},
        {51, 62, 69, 75, 47, 124, 171},
        {504, 603, 691, 702, 451, 120, 171}};

    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop: " << i + 1 << endl;
        for (int j = 0; j < 7; j++)
        {
            cout << chaiSales[i][j] << "cups  " << endl;
        }
    }

    return 0;
}