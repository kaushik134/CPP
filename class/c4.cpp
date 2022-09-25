#include<iostream>
using namespace std;
class stud{
    int m1,m2,m3,total,pr;
    public:
    void input()
    {
        cout<<"\n Enter Marks1 : ";
        cin>>m1;

        cout<<"\n Enter Marks2 : ";
        cin>>m2;

        cout<<"\n Enter Marks3 : ";
        cin>>m3;

        total=m1+m2+m3;

        pr=total/3;
    }
    void output()
    {
        cout<<"\n Marks1 = "<<m1;
        cout<<"\n Marks2 = "<<m2;
        cout<<"\n Marks3 = "<<m3;
        cout<<"\n Total = "<<total;
        cout<<"\n Percentage = "<<pr;
        if(pr>=70)
        {
            cout<<"\n Grade = A";
        }
        else if(pr>=60 && pr<70)
        {
            cout<<"\n Grade = B";
        }
        else if(pr>=50 && pr<60)
        {
            cout<<"\n Grade = C";
        }
        else if(pr>=40 && pr<50)
        {
            cout<<"\n Grade = D";
        }
        else
        {
            cout<<"\n Grade = Faill !!!";
        }
    }
};
int main()
{
    stud student;
    student.input();
    student.output();
}