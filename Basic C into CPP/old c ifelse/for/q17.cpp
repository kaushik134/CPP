#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"\n Enter Number : ";
    cin>>n;

    for(int i=1;i<=n;i*=2)
    {
        cout<<"\t"<<i*k;
        k++;
    }
}