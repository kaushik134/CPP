#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"\t"<<char(i);
        }
        cout<<"\n";
    }
}