#include<iostream>
using namespace std;
class A{
    int X;
    public:
    A(int a)
    {
        this->X=a;
    }
    int show_A()
    {
        return X;
    }
};
class B{
    int Y;
    public:
    B(int b)
    {
        this->Y=b;
    }
    int show_B()
    {
        return Y;
    }
};
class C : public A,public B{
    int Z;
    public:
    C(int a,int b,int c): A(a),B(b)
    {
        this->Z=c;
    }
    int show_C()
    {
        return Z;
    }
};
int main()
{
    C obj(1,2,3);
    cout<<"\n A = "<<obj.show_A();
    cout<<"\n B = "<<obj.show_B();
    cout<<"\n C = "<<obj.show_C();
}