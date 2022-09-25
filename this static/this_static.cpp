#include<iostream>
using namespace std;
class Bank{
    int ac_no,bal;
    string ac_name;
    public:
    static int count;
    Bank(int ac_no,int bal,string ac_name)
    {
        this->ac_no=ac_no;
        this->bal=bal;
        this->ac_name=ac_name;
        count++;
    }
    void get_detail()
    {
        cout<<"\n "<<ac_no<<" - "<<ac_name<<" - "<<bal;
    }
};
int Bank:: count;
int main()
{
    Bank k(123456,1000,"kaushik"),b(12345,500,"dhruvik");
    k.get_detail();
    b.get_detail();
}