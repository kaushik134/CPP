#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"\n Enter N : ";
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        cout<<"\n "<< n << " * " << i << " = " << n*i;
    }
}