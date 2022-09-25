#include<iostream>
#include<string>
using namespace std;
class Flight{
    int num;
    float distance,fuel;
    string destination;
    public:
    void FEEDINFO()
    {
        cout<<"\n Enter Flight Number : ";
        cin>>num;
        cout<<"\n Enter Destination : ";
        cin>>destination;
        cout<<"\n Enter Distance : ";
        cin>>distance;
    }
    int CALFUEL()
    {
        if(distance<=1000)
        {
            cout<<"\n Total Fuel = 500";
        }
        else if(distance>1000 && distance<=2000)
        {
            cout<<"\n Total Fuel = 1100";
        }
        else
        {
            cout<<"\n Total Fuel = 2200";
        }
    }
    void SHOWINFO()
    {
        cout<<"\n Flight Number : "<<num;
        cout<<"\n Destination : "<<destination;
        cout<<"\n Distance : "<<distance;
        CALFUEL();
    }
};
int main()
{
    Flight a;
    a.FEEDINFO();
    a.SHOWINFO();
}