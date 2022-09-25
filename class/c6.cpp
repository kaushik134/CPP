#include <iostream>
using namespace std;
class unit
{
    int unit;
    float tax, rs;

public:
    void input()
    {
        cout << "\n Enter Units : ";
        cin >> unit;
    }
    void bill()
    {
        if (unit <= 100)
        {
            rs = unit * 0.60 + 50;
            cout << "\n Your Bill Is : " << rs;
        }
        else if (unit > 100 && unit <= 300)
        {
            unit -= 100;
            rs = (unit * 0.80) + 50 + 60;
            cout << "\n Your Bill Is : " << rs;
        }
        else if (unit > 300)
        {
            unit -= 300;
            rs = (unit * 0.90) + 50 + 60 + 160;

            if (rs >= 300)
            {
                tax = rs * 0.15;
                rs += tax;
                cout << "\n Your Bill Is : " << rs;
            }
            else
            {
                cout << "\n Your Bill Is : " << rs;
            }
        }
    }
};
int main()
{
    unit bill;
    bill.input();
    bill.bill();
}