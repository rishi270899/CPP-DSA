#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapE(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[8] = {5, 3, 7, 3, 9, 2, 0, 32};
    int odd[5] = {11, 5, 8, 9, 3};

    swapE(even, 8);
    printArray(even, 8);
    cout << endl;

    swapE(odd, 5);
    printArray(odd, 5);

    return 0;
}