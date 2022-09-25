#include <iostream>
using namespace std;
int main()
{
    char i;
    for (i = 65; i <= 90; i++)
    {
        cout << "\n " << i << "-" << char(i+32);
    }
}