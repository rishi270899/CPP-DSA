#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, pos; val;
    
    for(i=0; i<9; i++)
    {
      cout<<"\n Enter  Array Elements: ";
       cin>>arr[i];
    }
       
    cout<<"\nEnter Element to Insert: ";
    cin>>pos;
    cout<<"\n Enter value to insert:";
    cin>>val;
    for(i=8;i>=pos;I--)
    a[i+1]= a[i];
    a[pos]=val;
    cout<<"\n Array after insertion:";
    for(i=0;i<10;i++)
    cout<<"\n",a[i];

    return 0;
}