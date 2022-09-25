#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"\n Enter Number : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            k=i*i;
            cout<<"\t"<<k;
        }
        else
        {
            cout<<"\t"<<i;
        }
    }
}