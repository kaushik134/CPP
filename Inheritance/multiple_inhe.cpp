#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n Base_1 Constructor...";
    }
    ~A()
    {
        cout<<"\n Base_1 Destructor...";
    }
};
class Base_2{
    public:
    Base_2()
    {
        cout<<"\n Base_2 Constructor...";
    }
    ~Base_2()
    {
        cout<<"\n Base_2 Destructor...";
    }
};
class Derived : public A , public Base_2{
    public:
    Derived()
    {
        cout<<"\n Derived Constructor...";
    }
    ~Derived()
    {
        cout<<"\n Derived Destructor...";
    }
};
int main()
{
    Derived obj;
}