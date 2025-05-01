#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Getter method
    double getBalance() const
    {
        return balance;
    }

    // Method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount" << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("122280922", 500);

    cout << "Initial Balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(200);
    myAccount.withdraw(100);

    cout << "Final Balance: " << myAccount.getBalance() << endl;

    return 0;
}