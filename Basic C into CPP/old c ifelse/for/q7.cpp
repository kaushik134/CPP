#include <iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"\n Enter N :";
    cin>>n;

    for (i = 2; i <= n; i+=2)
    {
        cout << "\n " << i;
    }
}