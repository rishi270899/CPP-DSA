#include <iostream>

using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end-start) / 2;
    }
    return -1;
}

int main()
{


    int even[6] = {-4,-1, 5, 7, 9, 23};

    int odd[5] = {3, 5, 7, 9, 54};

    int dec[6] = {-8,-1,2,5,6,7};

    

    int indexEven = binarysearch(even, 6, -4);

    cout << indexEven << endl;

    int indexOdd = binarysearch(odd, 5, 5);

    cout << indexOdd << endl;

    int decorder = binarysearch(dec, 6 , -1);

    cout<< decorder << endl;



    return 0;
}


