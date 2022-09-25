#include<iostream>
using namespace std;
int main()
{
    int math,phy,che,eng,total,pr;

    cout<<"\n Enter Math Marks = ";
    cin>>math;

    cout<<"\n Enter Physics Marks = ";
    cin>>phy;

    cout<<"\n Enter Chemestry Marks = ";
    cin>>che;

    cout<<"\n Enter English Marks = ";
    cin>>eng;

    total=math+phy+che+eng;
    cout<<"\n Total = "<<total;
    pr=total/4;
    cout<<"\n Percentange = "<<pr;

    if(math<40 && phy<40 && che<40 && eng<40)
    {
        if(pr>=70)
        {
            cout<<"\n Grade : A";
        }
        else if(pr>=60 && pr<70)
        {
            cout<<"\n Grade : B";
        }
        else if(pr>=50 && pr<60)
        {
            cout<<"\n Grade : C";
        }
        else if(pr>=40 && pr<50)
        {
            cout<<"\n Grade : D";
        }
        else
        {
            cout<<"\n Fail ....";
        }
    }
    else
    {
        cout<<"\n Fail ....";
    }
}