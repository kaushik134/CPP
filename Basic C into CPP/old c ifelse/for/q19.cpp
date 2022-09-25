#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=0,c=0;
    cout<<"\n Enter Number : ";
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<"\t"<<c;
    }
}