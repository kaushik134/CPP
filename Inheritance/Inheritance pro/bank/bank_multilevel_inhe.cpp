#include <iostream>
using namespace std;
class Bank
{
protected:
    int ac;
    string name, ac_type, loan;

public:
    void getdetail()
    {
        cout << "\n Enter Account Number : ";
        cin >> ac;
        cout << "\n Enter Name : ";
        cin >> name;
        cout << "\n Enter Account Type : ";
        cin >> ac_type;
        cout << "\n Enter Loan Type : ";
        cin >> loan;
    }
};
class Loan : public Bank
{
protected:
    int amount;
    float intrest, rate, year;

public:
    void cal()
    {
        cout << "\n Enter Loan Amount : ";
        cin >> amount;
        cout << "\n Enter Rate : ";
        cin >> rate;
        cout << "\n Enter Time : ";
        cin >> year;
        intrest = amount * (rate/100) * year;
    }
};
class Person : public Loan
{
public:
    void print()
    {
        cout << "\n Account Number = " << ac;
        cout << "\n Name = " << name;
        cout << "\n Account Type = " << ac_type;
        cout << "\n Loan Type= " << loan;
        cout << "\n Loan Amount = " << amount;
        cout << "\n Loan Rate = " << rate;
        cout << "\n Loan Year = " << year;
        cout << "\n Intrest = " << intrest;
    }
};
int main()
{
    Person k;
    k.getdetail();
    k.cal();
    k.print();
}