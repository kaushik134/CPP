#include<iostream>
using namespace std;
class loc{
    int longitude,latitude;
    public:
    loc(){}
    loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n Longitude = "<<longitude;
        cout<<"\n Latitude = "<<latitude;
    }
    friend loc operator+(loc,loc);
};
loc operator+(loc obj1,loc obj2)
{
    loc total;
    total.longitude=obj1.longitude+obj2.longitude;
    total.latitude=obj1.latitude+obj2.latitude;
    return total;
}
int main()
{
    loc obj1(10,20),obj2(30,40),obj3;
    obj3=obj1+obj2;
    obj3.show();
}