#include<iostream>
using namespace std;
int main(){
    int a[10],i,j,n,temp = 0;
    cout<<"Enter the size of array :";
    cin>>n;
   cout<<"Enter the element :";
   for( i=0; i<n; i++)
   {
    cin>>a[i];
   }
   for( i = 1; i<=n-1; i++)
   {
    for(j=i; j>0 and a[j-1]>a[j];j--)
    {
        temp = a[j];
        a[j]= a[j-1];
        a[j-1]=temp;

    }
   }

cout<<"Sorted Array : "<<endl;
for(i=0; i<n; i++)
{
    cout<<a[i];

}

}