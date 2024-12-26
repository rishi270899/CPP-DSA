#include <iostream>
using namespace std;

class Bus
{
private:
    int busid;
    string from;
    string to;
    int distance;
    int rent;
    string type;
    int totalrent;
    void calculateRent()
    {
        totalrent = rent * distance;
    }

public:
    void getBusInformation()
    {
        cout << "Enter BUS ID : ";
        cin >> busid;
        cout << "Enter From : ";
        cin >> from;
        cout << "Enter To : ";
        cin >> to;
        cout << "Enter Distance : ";
        cin >> distance;
        cout << "Enter Rent : ";
        cin >> rent;

        cout << "Enter Bus Type[AC/NON AC] : ";
        cin >> type;
        if (type == "AC")
        {
            rent = rent + 1;
        }
        calculateRent();
    }

    void showBusInformation()
    {
        cout << busid << "," << from << "," << to << "," << distance << "," << rent << "," << type << "," << totalrent << endl;
    }
};

int main()
{

    Bus b1;
    b1.getBusInformation();
    b1.showBusInformation();

    return 0;
}