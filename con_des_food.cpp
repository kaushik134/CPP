#include<iostream>
using namespace std;
class Food{
    int qty,total=0,a,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    string name;
    public:
    Food()
    {
        cout<<"\n Enter Your Name : ";
        cin>>name;
    }
    ~Food()
    {
        cout<<name<<" Your Bill : "<<total;
    }
    void menu()
    {
        cout<<"\n press 1 Vadapav = 25";
        cout<<"\n press 2 Burger = 130";
        cout<<"\n press 3 Samosa = 15";
        cout<<"\n press 4 Dhosa = 199";
        cout<<"\n press 5 Dabeli = 25";
        cout<<"\n press 6 Frankie = 40";
        cout<<"\n press 7 Locho = 50";
        cout<<"\n press 8 Shandwich = 110";
        cout<<"\n press 9 Aloopuri = 25";
        cout<<"\n press 10 Pani_Puri = 15";
        cout<<"\n press 0 Exit ";
    }
    void Vadapav()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a=qty*25;
        total+=a;
    }
    void Burger()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a1=qty*130;
        total+=a1;
    }
    void Samosa()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a3=qty*15;
        total+=a3;
    }
    void Dhosa()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a4=qty*199;
        total+=a4;
    }
    void Dabeli()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a5=qty*25;
        total+=a5;
    }
    void Frankie()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a6=qty*40;
        total+=a6;
    }
    void Locho()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a7=qty*50;
        total+=a7;
    }
    void Shandwich()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a8=qty*110;
        total+=a8;
    }
    void Aloopuri()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a9=qty*25;
        total+=a9;
    }
    void Pani_Puri()
    {
        cout<<"\n Enter Quantity : ";
        cin>>qty;
        a9=qty*15;
        total+=a9;
    }
};
int main()
{
    Food hotel;
    int ch;
    while(1)
    {
        hotel.menu();
        cout<<"\n Enter Chooice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                hotel.Vadapav();
                break;
            }
            case 2:
            {
                hotel.Burger();
                break;
            }
            case 3:
            {
                hotel.Samosa();
                break;
            }
            case 4:
            {
                hotel.Dhosa();
                break;
            }
            case 5:
            {
                hotel.Dabeli();
                break;
            }
            case 6:
            {
                hotel.Frankie();
                break;
            }
            case 7:
            {
                hotel.Locho();
                break;
            }
            case 8:
            {
                hotel.Shandwich();
                break;
            }
            case 9:
            {
                hotel.Aloopuri();
                break;
            }
            case 10:
            {
                hotel.Pani_Puri();
                break;
            }
            case 0:
            {
                return 0;
            }

        }
    }
}