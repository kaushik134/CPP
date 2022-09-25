#include<iostream>
using namespace std;
int main()
{
    float slab,tax;

    cout<<"\n Enter Slab = ";
    cin>>slab;

    if(slab<=2500)
    {
        cout<<"\n No Tax ....";
    }
    else if(slab>2500 && slab<=5000)
    {
        tax=(slab-2500)*0.10;
        cout<<"\n Your Tax Is = "<<tax;
    }
    else if(slab>5000 && slab<=10000)
    {
        tax=(slab-5000)*0.20+250;
        cout<<"\n Your Tax Is = "<<tax;
    }
    else
    {
        tax=(slab-10000)*0.30+1250;
        cout<<"\n Your Tax Is = "<<tax;
    }
}