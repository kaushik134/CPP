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
class C : public B{
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
int main()
{
    C obj;
}