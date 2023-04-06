#include <iostream>
using namespace std;
class Bank
{
    float amount=0, with, dep;

public:
    void input()
    {
        cout << "\n Your Balance Is :" << amount<<endl;
        cout << "\n Enter Your Amount : ";
        cin >> amount;
    }
    void withdraw()
    {
        cout << "\n Enter withdraw Amount : ";
        cin >> with;
        if (with <= amount)
        {
            amount -= with;
            cout << "\n Your Withdraw Successfully...";
        }
        else
        {
            cout << "\n Your Amount is Lowest !!!";
        }
    }
    void deposite()
    {
        cout << "\n Enter Your Deposite Amount : ";
        cin >> dep;
        amount += dep;
    }
    void balance()
    {
        cout << "\n Your Balance Is :" << amount;
    }
};
int main()
{
    Bank sbi;
    int ch;
    while (1)
    {
        cout << "\n 1.Fix Balance";
        cout << "\n 2.Withdraw";
        cout << "\n 3.Deposite";
        cout << "\n 4.Total Balance";
        cout << "\n 5.Exit";
        cout << "\n";
        cout << "\n Enter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            sbi.input();
            break;
        }
        case 2:
        {
            sbi.withdraw();
            break;
        }
        case 3:
        {
            sbi.deposite();
            break;
        }
        case 4:
        {
            sbi.balance();
            break;
        }
        case 5:
        {
            return 0;
        }
        }
    }
}