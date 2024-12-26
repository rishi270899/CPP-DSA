#include <iostream>
using namespace std;

class TwoNum
{
private:
    int x, y;

public:
    void GetValue()
    {
        cout << "Enter the value of X : ";
        cin >> x;
        cout << "Enter the value of Y : ";
        cin >> y;
    }

    void PutValue()
    {
        cout << "The value Of X is : " << x << endl;
        cout << "The value Of Y is : " << y << endl;
    }

    void Add()
    {
        cout << "Sum is : " << x + y << endl;
    }

    void Multiply()
    {
        cout << "Multiply is : " << x * y << endl;
    }

    void swap()
    {
        cout << "Befor swap X value is : " << x << endl;
        cout << "Befor swap Y value is : " << y << endl;
        int temp;
        temp = x;
        x = y;
        y = temp;

        cout << "After swap X value is : " << x << endl;
        cout << "After swap Y value is : " << y << endl;
    }

    void Max()
    {
        if (x > y)
            cout << "X is the greater and X value is : " << x << endl;
        else
            cout << "Y is the greater and Y value is : " << y << endl;
    }
    void Min()
    {
        if (x < y)
            cout << "X is the minimum and X value is : " << x << endl;
        else
            cout << "Y is the mimimum and Y value is : " << y << endl;
    }
};

int main()
{

    TwoNum t1;
    t1.GetValue();
    t1.PutValue();
    t1.Add();
    t1.Multiply();
    t1.swap();
    t1.Max();
    t1.Min();

    return 0;
}