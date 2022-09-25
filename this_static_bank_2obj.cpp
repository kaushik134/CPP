#include <iostream>
using namespace std;
class Bank
{
    float amount, with, dep;
    string name;

public:
    static int count, debit, credit;
    Bank(int amount, string name)
    {
        this->name = name;
        this->amount = amount;
        count++;
    }
    ~Bank()
    {
        cout << "\n " << name << " Balance Is :" << amount;
    }
    void show_Name()
    {
        cout << "\n"
             << " Bank Holder Name :" << name;
    }
    void fixbal()
    {
        cout << "\n"
             << name << " Your Balance Is : ";
    }
    void withdraw()
    {
        cout << "\n Enter withdraw Amount : ";
        cin >> with;
        if (with <= amount)
        {
            amount -= with;
            cout << "\n " << name << " Withdraw Successfully...";
        }
        else
        {
            cout << "\n " << name << " Amount is Lowest !!!";
        }
        debit++;
    }
    void deposite()
    {
        cout << "\n Enter " << name << " Deposite Amount : ";
        cin >> dep;
        amount += dep;
        credit++;
    }
    void balance()
    {
        cout << "\n " << name << " Balance Is :" << amount;
    }
    void history()
    {
        cout << "\n"
             << " Your Today Withdraw Transaction :" << debit;
        cout << "\n"
             << " Your Today Deposite Transaction :" << credit;
    }
};
int Bank::count;
int Bank::debit;
int Bank::credit;
int main()
{
    Bank sbi(500, "Kaushik"), bob(2000, "Dhruvik");
    int ch, n;
    cout << "\n press 1 Kaushik";
    cout << "\n press 2 Dhruvik";
    cout << "\n Enter Your Chooice : ";
    cin >> n;
    while (1)
    {
        cout << "\n 1.Show Name";
        cout << "\n 2.Withdraw";
        cout << "\n 3.Deposite";
        cout << "\n 4.Change Account Holder";
        cout << "\n 5.Exit";
        cout << "\n";
        cout << "\n Enter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            if (n == 1)
            {
                sbi.show_Name();
                break;
            }
            else
            {
                bob.show_Name();
                break;
            }
        }
        case 2:
        {
            if (n == 1)
            {
                sbi.withdraw();
                break;
            }
            else
            {
                bob.withdraw();
                break;
            }
        }
        case 3:
        {
            if (n == 1)
            {
                sbi.deposite();
                break;
            }
            else
            {
                bob.deposite();
                break;
            }
        }
        case 4:
        {
            if (n == 1)
            {
                n = 2;
                break;
            }
            else
            {
                n = 1;
                break;
            }
        }
        case 5:
        {
            if (n == 1)
            {
                sbi.history();
                return 0;
            }
            else
            {
                bob.history();
                return 0;
            }
        }
        }
    }
}