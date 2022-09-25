#include<iostream>
using namespace std;
int main()
{
    char i;
    for(i=65;i<=122;)
    {
        if(i<=90)
        {
            cout<<"\t"<<i;
            i+=34;
        }
        else
        {
            cout<<"\t"<<i;
            i-=30;
        }
    }
}