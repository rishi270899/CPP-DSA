#include <iostream>
using namespace std;

class Bank
{
private:
    int accountno;
    string name;
    int balance;

public:
    void openAccount()
    {
        cout << "Enter Account Number : ";
        cin >> accountno;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Bank Balance : ";
        cin >> balance;
    }

    void showAccount()
    {
        cout << "Account No : " << accountno << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }

    void deposite()
    {
        int amt;
        cout << "How much amount to deposite : ";
        cin >> amt;
        if (amt > 0)
            balance = balance + amt;
        else
            cout << "Invalid amount..." << endl;
    }

    void withDrawal()
    {
        int amount;
        cout << "How much amount to withdrawl : ";
        cin >> amount;
        if (balance >= amount)
            balance = balance - amount;
        else
            cout << "Less Balance" << endl;
    }
};

int main()
{

    Bank c1;

    c1.openAccount();
    c1.showAccount();

    c1.deposite();
    c1.showAccount();

    c1.withDrawal();
    c1.showAccount();

    c1.deposite();
    c1.showAccount();

    return 0;
}