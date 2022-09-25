#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"\n Enter Number : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        k=i*i;
        cout<<"\t"<<k;
    }
}