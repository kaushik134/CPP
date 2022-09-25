#include<iostream>
using namespace std;
class Base{
    public:
    Base()
    {
        cout<<"\n Base Constructor...";
    }
    ~Base()
    {
        cout<<"\n Base Destructor...";
    }
};
class Derived : public Base {
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
    // Base obj;
    Derived obj1;
}