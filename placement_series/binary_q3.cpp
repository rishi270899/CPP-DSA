#include <iostream>

int findHighestElement(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return arr[left];
}

int main()
{
    int arr[10] = {1, 2, 3, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int highestElement = findHighestElement(arr, n);
    std::cout << "The highest element is: " << highestElement << std::endl;

    return 0;
}
