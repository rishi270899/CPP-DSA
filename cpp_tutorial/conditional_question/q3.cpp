#include<iostream>
using namespace std;
int main(){
int sp,cp;
cout<<"Enter the value of SP : "<<;
cin>>sp;
cout<<"Enter the Value of cp : "<<;
cin>>cp;
if(sp>cp){
    cout<<"Profit : "<<sp-cp<<endl;
}
if(cp>sp){
    cout<<"Loss : "<<cp-sp<<endl;
}
if(cp==sp){
    cout<<"No profit"
}

return 0;
}