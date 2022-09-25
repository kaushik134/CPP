#include<iostream>
#include<string>
using namespace std;
class BOOK{
    int book_no,price,total,copies;
    string book_title;
    public:
    void input()
    {
        cout<<"\n Enter Book Number : ";
        cin>>book_no;
        cout<<"\n Enter Book Title : ";
        fflush(stdin);
        getline(cin,book_title);
        fflush(stdin);
        cout<<"\n Enter Copies Price : ";
        cin>>price;
    }
    void purchase()
    {
        cout<<"\n Enter Purchase Copies : ";
        cin>>copies;
    }
    void Total_Cost()
    {
        total=copies*price;
        cout<<"\n Your Total Bill : "<<total;
    }
};
int main()
{
    BOOK b1;
    b1.input();
    b1.purchase();
    b1.Total_Cost();
}