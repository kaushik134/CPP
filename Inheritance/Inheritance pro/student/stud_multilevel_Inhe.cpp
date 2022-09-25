#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int roll_no;
    char name[30];

public:
    void input();
    void output();
};
class marks : public student
{
protected:
    int m1, m2, m3;

public:
    void getmark();
    void putmark();
};
class result : public marks
{
private:
    int total;
    float pr;

public:
    void process();
    void putresult();
};
void student ::input()
{
    cout << "\n Enter Your Roll No : ";
    cin >> roll_no;
    cout << "\n Enter Your Name : ";
    cin >> name;
}
void student ::output()
{
    cout << "\n Roll No = " << roll_no;
    cout << "\n Name = " << name;
}
void marks ::getmark()
{
    cout << "\n Enter M1 : ";
    cin >> m1;
    cout << "\n Enter M2 : ";
    cin >> m2;
    cout << "\n Enter M3 : ";
    cin >> m3;
}
void marks ::putmark()
{
    cout << "\n Marks1 = " << m1;
    cout << "\n Marks2 = " << m2;
    cout << "\n Marks3 = " << m3;
}
void result ::process()
{
    total = m1 + m2 + m3;
    pr = total / 3;
}
void result ::putresult()
{
    cout << "\n Total = " << total;
    cout << "\n Percentage = " << pr;
}
int main()
{
    result k;
    k.input();
    k.getmark();
    k.process();
    k.output();
    k.putmark();
    k.putresult();
}