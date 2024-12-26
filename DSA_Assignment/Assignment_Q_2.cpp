#include<iostream>
using namespace std;
//print arrar in reverse order.
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
for(int idx =(n-1);idx>=0;idx--){
  cout<<"Reverse element : "<<alp[idx]<<endl;
}
}