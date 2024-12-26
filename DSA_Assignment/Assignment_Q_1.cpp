#include<iostream>
using namespace std;
//write a program to print alternate elements of array.
int main(){
  int n;
  cout<<"The size of array : ";
  cin>>n;
 char alp[n];
 for(int idx=0;idx<n;idx++){
  cout<<"Enter element : ";
  cin>>alp[idx];

 }
 for(int idx=0;idx<n;idx++){
  cout<<alp[idx]<<endl;
}
for(int idx = 0;idx<n;idx=idx+2){
  cout<<"Alternative Array : "<<alp[idx]<<endl;
}
}