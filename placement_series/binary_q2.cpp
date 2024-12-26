#include <iostream>
using namespace std;

int firstoccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}
int lastoccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int odd[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "first occurance of 3 at index : " << firstoccurance(odd, 10, 3) << endl;
    cout << "last occurance of 3 at index : " << lastoccurance(odd, 10, 3) << endl;

    return 0;
}
