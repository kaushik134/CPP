#include<iostream>
using namespace std;
class Report{
    int id,marks[10],avg;
    float total;
    string name;
    public:
    void mark_input()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"\n Enter Marks ["<<i<<"] : ";
            cin>>marks[i];
        }
    }
    void mark_output()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"\n  Marks"<<i<<" : "<<marks[i];
            total+=marks[i];
        }
    }
    void Read()
    {
        cout<<"\n Enter ID : ";
        cin>>id;
        cout<<"\n Enter Name : ";
        cin>>name;
        mark_input();
    }
    void Display()
    {
        cout<<"\n Id : "<<id;
        cout<<"\n Name : "<<name;
        mark_output();
        cout<<"\n Average : "<<total/5;
    }
};
int main()
{
    Report a;
    a.Read();
    a.Display();
}