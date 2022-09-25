#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        if(i%2==1)
        {
            cout<<char(i)<<"\t";
        }
    }
}