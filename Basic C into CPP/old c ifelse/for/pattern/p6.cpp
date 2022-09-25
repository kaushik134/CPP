#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=10;i+=2)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"\t"<<i;
        }
        cout<<"\n";
    }
}