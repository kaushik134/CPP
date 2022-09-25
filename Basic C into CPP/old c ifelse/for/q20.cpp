#include<iostream>
using namespace std;
int main()
{
    float n=1,i;
    /*cout<<"\n Enter Number : ";
    cin>>n;*/

    for(i=-0.5;i<=10;i++)
    {
        n=n+i;
        cout<<"\t"<<float(n);
    }
}