#include <iostream>
using namespace std;
class Bank{};

class Saving : public Bank
{
private:
    int balance = 0, amount;

public:
    Saving()
    {
        amount = 500;
        balance += amount;
    }
    ~Saving()
    {
        cout << "\n Saving Account Balance = " << balance;
    }
    void withdraw()
    {
        int with;
        cout << "\n Enter Withdraw Amount : ";
        cin >> with;
        if (balance > with)
        {
            cout << "\n Withdraw "<<with<<" Successfully !!!";
        }
        else
        {
            cout << "\n "<<"Rs."<<with<<" Not Enough Balance";
        }
        balance -= with;
    }
    void deposite()
    {
        int dep;
        cout << "\n Enter Deposite Amount : ";
        cin >> dep;
        balance += dep;
        cout<<"\n "<<"Rs."<<dep<<" Deposited !!!";
    }
};
class Cuurent : public Bank
{
private:
    int bal = 0, amt;

public:
    Cuurent()
    {
        amt = 1000;
        bal += amt;
    }
    ~Cuurent()
    {
        cout << "\n Cuurent Account Balance = " << bal;
    }
    void withdrawc()
    {
        int with;
        cout << "\n Enter Withdraw Amount : ";
        cin >> with;
        if (bal > with)
        {
            cout << "\n Withdraw "<<with<<" Successfully !!!";
        }
        else
        {
            cout << "\n "<<"Rs."<<with<<" Not Enough Balance";
        }
        bal -= with;
    }
    void depositec()
    {
        int dep;
        cout << "\n Enter Deposite Amount : ";
        cin >> dep;
        bal += dep;
        cout<<"\n "<<"Rs."<<dep<<" Deposited !!!";
    }
};
class person : public Saving, public Cuurent
{
    protected:
    int ac_no;
    string ac_holder;

    public:
    void getdetails(){
        cout << "\n Enter Account Number : ";
        cin >> ac_no;
        cout << "\n Enter Account Holder Name : ";
        cin >> ac_holder;
    }
    void putdetail()
    {
        cout << "\n Account Number = " << ac_no;
        cout << "\n Account Holder = " << ac_holder;
    }
};

int main()
{
    person k;
    k.getdetails();
    cout << "\n";
    int ch, ch1;
    cout << "\n Press 1 Saving Account ";
    cout << "\n Press 2 Current Account ";
    cout << "\n Press 0 Exit " << endl;
    cout << "\n Enter Your Choice : ";
    cin >> ch;
    if (ch == 0)
    {
        exit(ch);
    }
    {
        while (1)
        {

            k.putdetail();
            cout << "\n";
            cout << "\n 1.Withdraw";
            cout << "\n 2.Deposite";
            cout << "\n 3. Change Account Types";
            cout << "\n 0. Exit" << endl;
            cout << "\n Enter Choice : ";
            cin >> ch1;
            switch (ch1)
            {
            case 1:
            {
                if (ch == 1)
                {
                    k.withdraw();
                    break;
                }
                else
                {
                    k.withdrawc();
                    break;
                }
            }
            case 2:
            {
                if (ch == 1)
                {
                    k.deposite();
                    break;
                }
                else
                {
                    k.depositec();
                    break;
                }
            }
            case 3:
            {
                if (ch == 1)
                {
                    ch = 2;
                    break;
                }
                else
                {
                    ch = 1;
                    break;
                }
            }
            case 0:
            {
                return 0;
            }
            }
        }
    }
}