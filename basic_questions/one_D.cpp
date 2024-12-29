#include<iostream>

using namespace std;
int main(){
    int a[5];
    int i;
    cout<<"Enter array element : ";
    for( i=0;i<=4;i++)
    {
        cin>>a[i];

    }
    cout<<"Rverse array Element : "<<endl;
    for(i=4;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}