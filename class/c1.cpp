#include <iostream>
using namespace std;
class Car
{
    int price;
    int tyre_price;
    int eng_price;
public:
    void set_price(int n)
    {
        price = n;
    }
    int get_price()
    {
        return price;
    }
    void set_tyre_price(int n)
    {
        tyre_price = n;
    }
    int get_tyre_price()
    {
        return tyre_price;
    }
    void set_eng_price(int n)
    {
        eng_price = n;
    }
    int get_eng_price()
    {
        return eng_price;
    }
};
int main()
{
    int total;
    Car audi;
    audi.set_price(100000);
    audi.set_eng_price(45000);
    audi.set_tyre_price(10000);
    total=audi.get_eng_price()+audi.get_price()+audi.get_tyre_price();
    cout << "\n Price : " << total;
}