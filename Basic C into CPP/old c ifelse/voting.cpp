#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"\n Enter Age = ";
    cin>>i;

    if(i>=18)
    {
        cout<<"Eligible Voting";
    }
    else
    {
        cout<<"Eligible Not Voting";
    }
}