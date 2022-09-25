#include<iostream>
using namespace std;
int main()
{
    float salary,hra,da,gross;

    cout<<"\n Enter Salary = ";
    cin>>salary;

    if(salary<=5000)
    {
        hra=salary*0.08;
        da=salary*0.20;
    }
    else if(salary>5000 && salary<=10000)
    {
        hra=salary*0.12;
        da=salary*0.30;
    }
    else if(salary>10000 && salary<=15000)
    {
        hra=salary*0.15;
        da=salary*0.40;
    }
    else
    {
        hra=salary*0.20;
        da=salary*0.50;
    }

    gross=da+hra;
    cout<<"\n Total Gross Salary = "<<gross;
}