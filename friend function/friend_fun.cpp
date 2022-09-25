#include<iostream>
using namespace std;
class box{
    int len=0;
    public:
    box()
    {}
    friend int printlen(box);
};
int printlen(box b)
{
    b.len+=20;
    return b.len;
}
int main()
{
    box a;
    cout<<"\n length of box = "<<printlen(a);
}