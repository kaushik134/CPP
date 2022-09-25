#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n A Constructor...";
    }
    ~A()
    {
        cout<<"\n A Destructor...";
    }
};
class B : public A{
    public:
    B()
    {
        cout<<"\n B Constructor...";
    }
    ~B()
    {
        cout<<"\n B Destructor...";
    }
};
class C : public A{
    public:
    C()
    {
        cout<<"\n C Constructor...";
    }
    ~C()
    {
        cout<<"\n C Destructor...";
    }
};
class D : public A{
    public:
    D()
    {
        cout<<"\n D Constructor...";
    }
    ~D()
    {
        cout<<"\n D Destructor...";
    }
};
int main()
{
    B obj;
    C obj1;
    D obj2;
}