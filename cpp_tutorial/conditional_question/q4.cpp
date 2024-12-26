#include<iostream>
using namespace std;
//Write a program to calculate marks to grades .
int main(){
int n;
cout<<"Enter the marks : ";
cin>>n;
if(n>100 || n<0){
    cout<<"this Marks is not valid "<<endl;
    abort();
    }

if(100>=n && 90<=n){
    cout<<"Your Grade is A+";
}
if(89>=n && 80<=n){
    cout<<"Your Grade is A";
}
if(79>=n && 70<=n){
    cout<<"Your Grade is B+";
}
if(69>=n && 60<=n){
    cout<<"Your Grade is B";
}
if(59>=n && 50<=n){
    cout<<"Your Grade is C";
}
if(49>=n && 40<=n){
    cout<<"Your Grade is D";
}
if(39>=n && 30<=n){
    cout<<"Your Grade is E";
}
if(29>=n && 0<=n){
    cout<<"Your Grade is F";
}

return 0;
}