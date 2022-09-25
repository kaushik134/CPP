#include<iostream>
using namespace std;
class abc{
    int number;
    public:
    abc(int n)
    {
        number=n;
        cout<<"\n Numbner = "<<number;
    }
};
int main()
{
    abc p(20);
}