#include <iostream>
using namespace std;
class Bank
{
    float amount, with, dep;

public:
    Bank()
    {
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
                cout << "\n Enter Your Amount : ";
                cin >> amount;
                break;
            case 2:
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
                break;
            case 3:
                cout << "\n Enter Your Deposite Amount : ";
                cin >> dep;
                amount += dep;
                break;
            case 4:
                cout << "\n Your Balance Is :" << amount;
                break;
            case 5:
                exit;
            }
        }
    }
};
int main()
{
    Bank sbi;
}