#include<iostream>
using namespace std;
class Student{
    int no;
    float eng,math,sci,total;
    char name[20];
    public:
    void TakeData()
    {
        cout<<"\n Enter Student Id : ";
        cin>>no;
        cout<<"\n Enter Student Name : ";
        cin>>name;
        cout<<"\n Enter English Marks : ";
        cin>>eng;
        cout<<"\n Enter Maths Marks : ";
        cin>>math;
        cout<<"\n Enter Science Marks : ";
        cin>>sci;
    }
    void Total()
    {
        total=eng+math+sci;
    }
    void ShowData()
    {
        cout<<"\n Id \t:\t "<<no;
        cout<<"\n Name \t:\t "<<name;
        cout<<"\n English:\t "<<eng;
        cout<<"\n Maths \t:\t "<<math;
        cout<<"\n Science:\t "<<sci;
        cout<<"\n Total \t:\t "<<total;
    }
};
int main()
{
    Student std;
    std.TakeData();
    std.Total();
    std.ShowData();
}