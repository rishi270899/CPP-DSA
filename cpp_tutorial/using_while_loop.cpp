#include<iostream>
using namespace std;
int main()
    {
        int i;
        int n;
        cout<<"Enter The value of table :";
        cin>>n;
        i = n;
        while(i<=(n*10)){
            cout<<"The table :";
            i = i+n;
        }
        return 0;

    }