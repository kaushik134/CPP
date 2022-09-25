#include<iostream>
using namespace std;
class des{
    public:
    des()
    {
        cout<<"\n Default Constructor ....";
    }
    ~des()
    {
        cout<<"\n Destructor ....";
        // Destructor Call Automatic ....
    }
};
int main()
{
    des();
}