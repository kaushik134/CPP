#include<iostream>
using namespace std;
int main()
{
    char ch,i=32;
    cout<<"Enter Character = ";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        ch+=i;
        cout<<"Convert = "<<ch;
    }

    else if(ch>=97 && ch<=122)
    {
        ch-=i;
        cout<<"Convert = "<<ch;
    }
}