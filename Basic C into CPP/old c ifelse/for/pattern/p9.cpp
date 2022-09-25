#include<iostream>
using namespace std;
int main()
{
    int i,j,a=11;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"\t"<<a++;
        }
        a+=5;
        cout<<"\n";
    }
}