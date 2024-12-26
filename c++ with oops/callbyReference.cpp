#include <iostream>
using namespace std;
void call(int a, int &b)
{
    a = a + 10;
    b = b + 100;
}

int main()
{
    int x = 10, y = 20;
    cout << x << " , " << y << endl;
    call(x, y);
    cout << x << " , " << y << endl; //10 , 120
    call(y, x);
    cout << x << " , " << y << endl;

    return 0;
}