#include <iostream>
using namespace std;

int factorial(int n)
{
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
      fact = fact * i;
   }
   return fact;
}

int nCr(int n, int r)
{
   int num = factorial(n);
   int denum = factorial(r) * factorial(n - r);
   return num / denum;
}

int main()
{
   int n, r;
   cout << "Enter the value of n : ";
   cin >> n;
   cout << "Enter the value of r : ";
   cin >> r;
   cout << "Answere is : " << nCr(n, r);
   return 0;
}
