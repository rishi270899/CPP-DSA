#include<iostream>
using namespace std;
int main(){
int x ;
cout<<"Enter the value : ";
cin>>x;
if(x>0){
cout<<" value is alredy absolute : "<<x<<endl;
}
else if(x<0){
    cout<<"The Absolute value is : "<<x*(-1)<<endl;
}
return 0;
}