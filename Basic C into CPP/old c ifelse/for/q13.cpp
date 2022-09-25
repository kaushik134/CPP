#include<iostream>
using namespace std;
int main()
{
    int total=0;
    for(int i=2; i<=10;i+=2)
    {
        cout<<"\n "<<i;
        total+=i;
    }
    cout<<"\n Total = "<<total;
}