#include<iostream>
using namespace std;
//find max and min number in array.
int main(){
   int n;
   cout<<"The size of the array :";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cout<<"Enter the Element : ";
    cin>>arr[i];
   }
   int max=arr[0];
   for(int i=0;i<n;i++)
   if(arr[i]>max){
    max=arr[i];
   }cout<<"Maximun : "<<max<<endl;

     int min=arr[0];
     for(int i = 0;i<n;i++)
     if(arr[i]<min){
        min=arr[i];
         }cout<<"Minimum : "<<min<<endl;
   
    return 0;
}