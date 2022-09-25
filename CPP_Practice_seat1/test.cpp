#include<iostream>
using namespace std;
class Test{
    int testcode,nocandidates,centerReqd;
    string description;
    public:
    void schedule()
    {
        cout<<"\n Enter TestCode: ";
        cin>>testcode;
        cout<<"\n Enter Test Description: ";
        fflush(stdin);
        cin>>description;
        fflush(stdin);
        cout<<"\n Enter Number Of Candidates: ";
        cin>>nocandidates;
    }
    void Center()
    {
        centerReqd=(nocandidates/100+1);
        cout<<"\n Center Requirement = "<<centerReqd;
    }
    void display()
    {
        cout<<"\n TestCode = "<<testcode;
        cout<<"\n Description = "<<description;
        cout<<"\n Candidates = "<<nocandidates;
        Center();
    }
};
int main()
{
    Test t1;
    t1.schedule();
    t1.display();
}