#include<iostream>
using namespace std;
class abc{
    int a,b;
    public:
    void set_ab(int x, int y)
    {
        a=x;
        b=y;
    }
    void get_ab()
    {
        cout<<"\n a= "<<a;
        cout<<"\n b= "<<b;
    }
    abc add(abc e1,abc e2)
    {
        abc total;
        total.a=e1.a+e2.a;
        total.b=e1.b+e2.b;
        return total;
    }
};
int main()
{
    abc e1,e2,e3;
    e1.set_ab(10,20);
    e2.set_ab(30,40);
    e3=e3.add(e1,e2);
    e3.get_ab();
}