#include <iostream>
using namespace std;
class Batsman
{
    int bcode, innings, notout, runs, count = 0;
    float batavg;
    char bname[20];

public:
    void ReadData()
    {
        cout << "\n Enter 4 Digits bcode : ";
        cin >> bcode;
        do{
            bcode = bcode / 10;
            count++;
        }while (bcode != 0);
        
        if (count == 4)
        {
            cout << "\n Enter Player Name : ";
            cin >> bname;
            cout << "\n Enter Total Ruuns : ";
            cin >> runs;
            cout << "\n Enter Total Innings : ";
            cin >> innings;
            cout << "\n Enter Total NotOut : ";
            cin >> notout;
        }
        else
        {
            cout << "\n plz Enter 4 Digit Code ";
            ReadData();
        }
    }
    void calavg()
    {
        batavg = runs / (innings - notout);
        cout << "\n Average : " << batavg;
    }
    void Displaydata()
    {
        cout << "\n Player Name : " << bname;
        cout << "\n Runns : " << runs;
        cout << "\n Innings : " << innings;
        cout << "\n Not-Out : " << notout;
        calavg();
    }
};
int main()
{
    Batsman kohli;
    kohli.ReadData();
    kohli.Displaydata();
}