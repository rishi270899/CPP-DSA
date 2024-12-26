#include<iostream>
using namespace std;
int main(){
    int a[10],i,j,t,index,key;
    for(i = 0;i<10;i++){
        cout<<"Enter a Number : ";
        cin>>a[i];

    }
    cout<<"Enter element to Remove from the list :";
    cin>>key;
    index = 9;

    for ( i  = 0;i<=index;i++)
    {
       if (a[i]==key)
       {
        for ( j = i+1; j<=index;j++)
        a[j-1] = a[j];
        i --;
        index --;
       }
    }
    cout<<"Array after removing ";
    for( i = 0;i<index;i++)
    cout<<"Array after removing ";
    for(i=0;i<index;i++)
    cout<<a[i];
    return 0;
}