#include <iostream>
#include <string.h>
using namespace std;
class customer
{
public:
    string name;
    int ano, mo, croom, cmember, count=0;
    char from_date[20], to_date[20];
    void cgetdata()
    {
        cout << "\n Enter Customer Name : ";
        cin >> name;
    }
    void mobile()
    {
        cout << "\n Enter Mobile Number :";
        cin >> mo;
        while (mo != 0)
        {
            mo = mo / 10;
            count++;
        }
        if(mo<10)
        {
            cout<<"\n Please Enter Valid Mobile No.";
            cout<<"\n if";
            mobile();
        }
        else if(mo>10)
        {
            cout<<"\n else if";
            cout<<"\n Please Enter Valid Mobile No.";
            mobile();
        }
    }
    void addhar()
    {
        cout << "\n Enter Customer Aadhar Number : ";
        cin >> ano;
        while (ano != 0)
        {
            ano = ano / 10;
            count++;
        }
        if(ano<12)
        {
            cout<<"\n Please Enter Valid Aadhar No.";
            addhar();
        }
        else if(ano>12)
        {
            cout<<"\n Please Enter Valid Aadhar No.";
            addhar();
        }
    }
    void room()
    {
        cout << "\n Enter Total Members : ";
        cin >> cmember;
        cout << "\n Enter Room : ";
        cin >> croom;
        if (croom >= 3)
        {
            cout << "\n Room IS NOt Avlaible:(";
        }
        else
        {
            cout << "\n Please Fill Following Details";
        }
    }
};
class Room : public customer
{
public:
    char type, stype;
    int rent, status, as = 1500, ns = 1000, ab = 2500, nb = 2000;
    void rgetdata()
    {
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
class display : public Room
{
public:
    void output()
    {
        cout << "\n Name : " << name;
        cout << "\n Mobile No. : " << mo;
        cout << "\n Aadhar No. : " << ano;
        cout << "\n Total Member : " << cmember;
        rs();
    }
};
int main()
{
    display y;
    y.cgetdata();
    y.mobile();
    y.addhar();
    y.room();
    y.rgetdata();
    y.output();
}