#include<iostream>
using namespace std;
class kaushik{
    int age;
    public:
    kaushik()
    {
        age=25;
        cout<<"\n Default ..."<<age;
    }
    kaushik(int n)
    {
        age=n;
        cout<<"\n Parameterized ..."<<age;
    }
    kaushik(kaushik &abc)
    {
        age=abc.age;
        cout<<"\n copy ..."<<age;
    }
};
int main()
{
    kaushik p;
    kaushik p1(20);
    kaushik p2(p1);
}