#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\n Enter X : ";
    cin>>x;
    
    cout<<"\n Enter Y : ";
    cin>>y;


    if(x<=2000 || y>=3000)
    {
        cout<<"\n X = "<<x;
    }
    if(x>100 && y<500)
    {
        cout<<"\n Y = "<<y;
    }
}