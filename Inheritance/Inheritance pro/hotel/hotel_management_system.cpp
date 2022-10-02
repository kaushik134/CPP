#include <iostream>
#include <string.h>
using namespace std;
class customer
{
public:
    string name,mo,ano;
    int  cmember, count = 0, acount = 0;
    char from_date[20], to_date[20];
    void cgetdata()
    {
        cout << "\n Enter Customer Name : ";
        cin >> name;
        mobile();
    }
    void mobile()
    {
        cout << "\n Enter Mobile Number :";
        cin >> mo;
        count=mo.length();
        // cout<<"\n count = "<<count;
        if (count < 10 || count > 10)
        {
            cout << "\n Please Enter Valid Mobile No.";
            count = 0;
            mobile();
        }
        else
        {
            aadhar();
        }
    }
    void m(){
        cout << "\n Mobile No. : "<<mo;
    }
    void aadhar()
    {
        cout << "\n Enter Customer Aadhar Number : ";
        cin >> ano;
        acount=ano.length();
        if (acount == 12)
        {
            room();
        }
        else
        {
            // room();
            cout << "\n Please Enter Valid Aadhar No.";
            acount = 0;
            aadhar();
        }
    }
    void room()
    {
        cout << "\n Enter Total Members : ";
        cin >> cmember;
    }
};
class Room
{
public:
    char type, stype;
    int rent, status, as = 1500, ns = 1000, ab = 2500, nb = 2000, croom;
    void BookRoom()
    {
        cout << "\n Enter Room : ";
        cin >> croom;
        if (croom >= 3)
        {
            cout << "\n Room IS Not Avlaible:(";
        }
    }
    void rgetdata()
    {
        cout << "\n Please Fill Following Details";
        cout << "\n Enter Room Type (A/N): ";
        cin >> type;
        cout << "\n Enter Room Stype (S/B): ";
        cin >> stype;
    }
    void rs()
    {
        if (type == 'S' || type == 's' || type == 'a' || type == 'A')
        {
            cout << "\n Rent = RS." << as * croom;
        }
        else if (type == 'S' || type == 's' || type == 'n' || type == 'N')
        {
            cout << "\n Rent = RS." << ns * croom;
        }
        else if (type == 'B' || type == 'b' || type == 'a' || type == 'A')
        {
            cout << "\n Rent = RS." << ab * croom;
        }
        else if (type == 'B' || type == 'b' || type == 'n' || type == 'N')
        {
            cout << "\n Rent = RS." << nb * croom;
        }
    }
};
class Card : public Room, public customer
{
public:
    int ch, credit, debit, as = 1500, ns = 1000, ab = 2500, nb = 2000;
    string upi;
    void card()
    {
        cout << "\n 1.UPI";
        cout << "\n 2.CreditCard";
        cout << "\n 3.DebitCard";
        cout << "\n Enter Payment Method Chooice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\n Enter UPI Id : ";
            cin >> upi;
            if (type == 'S' || type == 's' || type == 'a' || type == 'A')
            {
                cout << "\n Your Payable RS. " << as * croom;
                cout << "\n";
                cout << "\n Your UPI Id - " << upi << " Payment RS." << as * croom << " Successfully";
            }
            else if (type == 'S' || type == 's' || type == 'n' || type == 'N')
            {
                cout << "\n Your Payable RS. " << ns * croom;
                cout << "\n";
                cout << "\n Your UPI Id - " << upi << " Payment RS." << ns * croom << " Successfully";
            }
            else if (type == 'B' || type == 'b' || type == 'a' || type == 'A')
            {
                cout << "\n Your Payable RS. " << ab * croom;
                cout << "\n";
                cout << "\n Your UPI Id - " << upi << " Payment RS." << ab * croom << " Successfully";
            }
            else if (type == 'B' || type == 'b' || type == 'n' || type == 'N')
            {
                cout << "\n Your Payable RS. " << nb * croom;
                cout << "\n";
                cout << "\n Your UPI Id - " << upi << " Payment RS." << nb * croom << " Successfully";
            }
            break;
        }
        case 2:
        {
            cout << "\n Enter CreditCard Number : ";
            cin >> credit;
            if (type == 'S' || type == 's' || type == 'a' || type == 'A')
            {
                cout << "\n Your Payable RS. " << as * croom;
                cout << "\n";
                cout << "\n Your CreditCard Number - " << credit << " Payment RS." << as * croom << " Successfully";
            }
            else if (type == 'S' || type == 's' || type == 'n' || type == 'N')
            {
                cout << "\n Your Payable RS. " << ns * croom;
                cout << "\n";
                cout << "\n Your CreditCard Number - " << credit << " Payment RS." << ns * croom << " Successfully";
            }
            else if (type == 'B' || type == 'b' || type == 'a' || type == 'A')
            {
                cout << "\n Your Payable RS. " << ab * croom;
                cout << "\n";
                cout << "\n Your CreditCard Number - " << credit << " Payment RS." << ab * croom << " Successfully";
            }
            else if (type == 'B' || type == 'b' || type == 'n' || type == 'N')
            {
                cout << "\n Your Payable RS. " << nb * croom;
                cout << "\n";
                cout << "\n Your CreditCard Number - " << credit << " Payment RS." << nb * croom << " Successfully";
            }
            break;
        }
        case 3:
        {
            cout << "\n Enter DebitCard Number : ";
            cin >> debit;
            if (type == 'S' || type == 's' || type == 'a' || type == 'A')
            {
                cout << "\n Your Payable RS. " << as * croom;
                cout << "\n";
                cout << "\n Your DebitCard Number - " << debit << " Payment RS." << as * croom << " Successfully";
            }
            else if (type == 'S' || type == 's' || type == 'n' || type == 'N')
            {
                cout << "\n Your Payable RS. " << ns * croom;
                cout << "\n";
                cout << "\n Your DebitCard Number - " << debit << " Payment RS." << ns * croom << " Successfully";
            }
            else if (type == 'B' || type == 'b' || type == 'a' || type == 'A')
            {
                cout << "\n Your Payable RS. " << ab * croom;
                cout << "\n";
                cout << "\n Your DebitCard Number - " << debit << " Payment RS." << ab * croom << " Successfully";
            }
            else if (type == 'B' || type == 'b' || type == 'n' || type == 'N')
            {
                cout << "\n Your Payable RS. " << nb * croom;
                cout << "\n";
                cout << "\n Your DebitCard Number - " << debit << " Payment RS." << nb * croom << " Successfully";
            }
            break;
        }
        }
    }
};
class display : public Card
{
public:
    void output()
    {
        cout << "\n Name : " << name;
        m();
        cout << "\n Aadhar No. : " << ano;
        cout << "\n Total Member : " << cmember;
        rs();
        cout<<"\n Payment Done!!!";
    }
};
int main()
{
    int d;
    display y;
    while (1)
    {
        cout << "\n 1.Customer Details";
        cout << "\n 2.Provide Facilities";
        cout << "\n 3.Payment Method";
        cout << "\n 4.Display Details";
        cout << "\n 5.Exit";
        cout<<"\n Enter Your Chooice : ";
        cin>>d;
        switch(d)
        {
            case 1:
            {
                y.cgetdata();
                y.BookRoom();
                break;
            }
            case 2:
            {
                y.rgetdata();
                y.rs();
                break;
            }
            case 3:
            {
                y.card();
                break;
            }
            case 4:
            {
                y.output();
                break;
            }
            case 5:
            {
                cout<<"\n Thank you for your visit :(";
                return 0;
            }
        }
    }
}