#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display()
    {
        cout<<"\n Base ...";
    }
};
class Derived : public Base{
    public:
    void display()
    {
        cout<<"\n Derived ...";
    }
};
int main()
{
    Base *a,b;
    a=&b;
    a->display();
    Derived d;
    a=&d;
    a->display();
}