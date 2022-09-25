#include<iostream>
using namespace std;
int main()
{
    int total=0;
    for(int i=1; i<=10;i++)
    {
        cout<<"\n "<<i;
        total+=i;
    }
    cout<<"\n Total = "<<total;
}