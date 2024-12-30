// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 5;
//     int num = 1;

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n; j++)
//         {
//             cout << num << " ";
//             num++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// we can achive this result without using second variable

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (i - 1) * n + j << " ";
        }

        cout << endl;
    }

    return 0;
}
