#include <iostream>
using namespace std;
class stud
{
    int m1, m2, m3, total, pr;

public:
    void set_m1(int n)
    {
        m1 = n;
    }
    int get_m1()
    {
        return m1;
    }
    void set_m2(int n)
    {
        m2 = n;
    }
    int get_m2()
    {
        return m2;
    }
    void set_m3(int n)
    {
        m3 = n;
    }
    int get_m3()
    {
        return m3;
    }
    void cal()
    {
        total = get_m1() + get_m2() + get_m3();
        pr = total / 3;
    }
    void print()
    {
        cout << "\n Marks1 = " << m1;
        cout << "\n Marks1 = " << m1;
        cout << "\n Marks1 = " << m3;
        cout << "\n Total = " << total;
        cout << "\n Percentage = " << pr;
        if (pr >= 70)
        {
            cout << "\n Grade = A";
        }
        else if (pr >= 60 && pr < 70)
        {
            cout << "\n Grade = B";
        }
        else if (pr >= 50 && pr < 60)
        {
            cout << "\n Grade = C";
        }
        else if (pr >= 40 && pr < 50)
        {
            cout << "\n Grade = D";
        }
        else
        {
            cout << "\n Grade = Faill !!!";
        }
    }
};
int main()
{
    stud student;
    student.set_m1(30);
    student.set_m2(35);
    student.set_m3(30);
    student.cal();
    student.print();
}