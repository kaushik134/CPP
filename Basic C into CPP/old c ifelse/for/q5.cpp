#include <iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"\n Enter N :";
    cin>>n;

    for (i = -n; i <= n; i++)
    {
        cout << "\n " << i;
    }
}