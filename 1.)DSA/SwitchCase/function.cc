#include <iostream>
using namespace std;

// 1 --> Even
// 0 --> ODD
bool isEvenNumber(int number)
{
    // Odd
    if (number & 1)
    {
        return 0;
    }
    else
    { // Even
        return 1;
    }
}

int main()
{

    int num , value;
    

    cout << "Enter a number to know it is even or odd : ";
    cin >> num;

    if (isEvenNumber(num))
    {
        cout << num << " is an Even Number  " << endl;
    }
    else
    {
        cout << num << " is an Odd number " << endl;
    }

/* using the function again
    cout<<"Enter the value :";
    cin>>value;
    if(isEvenNumber(value)){
        cout<< value << "again even" <<endl;
    }
    else{
        cout<< value<< "odd again" <<endl;
    }
    */

    return 0;
}

