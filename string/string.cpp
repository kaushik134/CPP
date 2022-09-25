#include<iostream>
using namespace std;
class str{
    string name;
    public:
    void output()
    {
        cout<<"\n Enter String : ";
        // fflush(stdin); jo name input na mange to getline ni upr niche fflush(stdin) lakhvu...
        getline(cin,name); // name ma space pachi nu print karva mate....
        // fflush(stdin);
        cout<<"\n Name = "<<name;
    }
};
int main()
{
    str kaushik;
    kaushik.output();
}