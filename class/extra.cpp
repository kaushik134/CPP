#include <iostream>
using namespace std;
class Car
{
    int price, tyre_price, eng_price,total;

public:
    void set_price()
    {
        cout << "\n Enter Price : ";
        cin >> price >> tyre_price >> eng_price;
    }
    int get_price()
    {
        total= price + tyre_price + eng_price;
        cout<<"\n total = "<<total;
    }
};
int main()
{
    Car Audi;
    Audi.set_price();
    Audi.get_price();
}