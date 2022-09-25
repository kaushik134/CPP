#include <iostream>
using namespace std;
class Bank
{
private:
    int balance = 0, ac;
    string name;

public:
    void detail()
    {
        cout << "\n Enter Account Number : ";
        cin >> ac;
        cout << "\n Enter Name : ";
        cin >> name;
    }
    void show()
    {
        cout << "\n Account Number = " << ac;
        cout << "\n Name = " << name;
    }
};
class person : public Bank
{
protected:
    int balance = 0, amount, with, dep;

public:
    person()
    {
        amount = 1000;
        balance += amount;
    }
    ~person()
    {
        cout << "\n Balance = " << balance;
    }
    void withdraw()
    {
        cout << "\n Enter Withdraw Amount : ";
        cin >> with;
        if (balance > with)
        {
            cout << "\n Rs." << with << " Withdraw Successfully !!!";
        }
        else
        {
            cout << "\n Not Enough Balance";
        }
        balance -= with;
    }
    void deposite()
    {
        cout << "\n Enter Deposite Amount : ";
        cin >> dep;
        balance += dep;
        cout << "\n Rs." << dep << " Deposited !!!";
    }
};
int main()
{
    int ch;
    person obj;
    obj.detail();
    while (1)
    {
        obj.show();
        cout << "\n";
        cout << "\n 1.Withdraw";
        cout << "\n 2.Deposite";
        cout << "\n 0.Exit";
        cout << "\n";
        cout << "\n Enter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            obj.withdraw();
            break;
        }
        case 2:
        {
            obj.deposite();
            break;
        }
        case 0:
        {
            cout << "\n Exit";
            return 0;
        }
        }
    }
}