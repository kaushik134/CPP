#include<iostream>
using namespace std;
class stud{
    int roll,m1,m2,m3,total,pr;
    string name;
    public:
    void input()
    {
        cout<<"\n Enter Your Name : ";
        cin>>name;

        cout<<"\n Enter Your Roll No. : ";
        cin>>roll;

        cout<<"\n Enter Account : ";
        cin>>m1;

        cout<<"\n Enter State : ";
        cin>>m2;

        cout<<"\n Enter Eco : ";
        cin>>m3;

        total=m1+m2+m3;

        pr=total/3;
    }
    void result()
    {
        cout<<"\n Name \t\t RollNo. \t Account \t State \t Eco \t Total \t Percentage \t Grade";
    }
    void output()
    {
        cout<<"\n "<<name<<" \t "<<roll<<" \t\t "<<m1<<" \t\t "<<m2<<" \t "<<m3<<" \t "<<total<<" \t "<<pr<<" \t ";
        if(pr>=70)
        {
            cout<<"\t  A";
        }
        else if(pr>=60 && pr<70)
        {
            cout<<"\t  B";
        }
        else if(pr>=50 && pr<60)
        {
            cout<<"\t  C";
        }
        else if(pr>=40 && pr<50)
        {
            cout<<"\t  D";
        }
        else
        {
            cout<<"\t  Faill !!!";
        }
    }
};
int main()
{
    stud st[10];
    stud s1;
    for (int i=0;i<2;i++)
    {
        st[i].input();
    }
    s1.result();
    for(int i=0;i<2;i++)
    {
        st[i].output();
    }
}