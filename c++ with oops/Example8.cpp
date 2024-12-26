#include <iostream>
using namespace std;

class batsman
{
private:
    int bcode, inning, notout, runs;
    char bname;
    float calcavg()
    {
        float batavg = runs / (inning - notout);
        return batavg;
    }

public:
    void readData()
    {
        cout << "Enter the 4 digit bats man code : ";
        cin >> bcode;
        cout << "Enter the name : ";
        cin >> bname;
        cout << "Enter the inning : ";
        cin >> inning;
        cout << "Enter the notout : ";
        cin >> notout;
        cout << "Enter Runs : ";
        cin >> runs;
    }

    void diaplayData()
    {
        cout << "bcode value is : " << bcode << endl;
        cout << "Inning value is : " << inning << endl;
        cout << "Notout value is : " << notout << endl;
        cout << "Runs value is : " << runs << endl;
        cout << "Bname is : " << bname << endl;
        cout << "calculative average : " << calcavg();
    }
};

int main()
{
    batsman b1;
    b1.readData();
    b1.diaplayData();
    return 0;
}