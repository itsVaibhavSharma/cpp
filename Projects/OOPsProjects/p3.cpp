// Bank Account Management:
// Create a BankAccount class with subclasses for SavingsAccount and CheckingAccount.
// Implement methods for deposit, withdrawal, and checking balance.
// Utilize inheritance to share common functionalities.

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    string acc;
    double balance = 0;

public:
    BankAccount(string accno) : acc(accno) {}
    virtual void deposit(double amt)
    {
        balance = balance + amt; 
    }

    virtual void withdraw(double amt)
    {
        balance = balance - amt;
    }

    double displayBalance()
    {
        return balance;
    }
};

class SavingsAccount : public BankAccount
{
public:
    double interest;
    SavingsAccount(string acc, double inrst) : BankAccount(acc), interest(inrst) {}

    void addInterest()
    {
        balance = balance * (1 + interest / 100);
    }

    void deposit(double amt)
    {
        cout << "Old balance of Savings Account: " << balance << endl;
        balance = balance + amt;
        cout << "new balance of Savings Account: " << balance << endl;

        addInterest();
        cout << "new balance of Savings Account after Interest: " << balance << endl;
    }

    void withdraw(double amt)
    {
        if (amt <= balance)
        {
            cout << "Old balance of Savings Account: " << balance << endl;
            balance = balance - amt;
            cout << "New balance of Savings Account: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
};

class CheckingAccount : public BankAccount
{
public:
    CheckingAccount(string acc) : BankAccount(acc) {}
    void deposit(double amt)
    {
        cout << "Old balance of Checking Account: " << balance << endl;
        balance = balance + amt;
        cout << "new balance of Checking Account: " << balance << endl;
    }

    void withdraw(double amt)
    {
        if (amt <= balance)
        {
            cout << "Old balance of Checking Account: " << balance << endl;
            balance = balance - amt;
            cout << "New balance of Checking Account: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
};

int main()
{
    SavingsAccount sb("0901ad231069", 6.5);
    CheckingAccount ck("0901ad231008");

    BankAccount *bankacc[2] = {&sb, &ck};

    bankacc[0]->deposit(69000);
    bankacc[1]->deposit(234400);
    bankacc[0]->withdraw(10000);
    bankacc[0]->withdraw(70000);
    bankacc[1]->withdraw(2000);

    return 0;
}