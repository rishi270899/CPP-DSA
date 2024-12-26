#include<iostream>
using namespace std;

void searchMaximum(int a , int b){
    if(a>b){
        cout<<a<<" is greter than "<<b;
    }else if (a<b)
    {
       cout<<b<<" is greter than "<<a;
    }else{
        cout<<"Both are equal";
    }
    
}
  
 
int main(){

 searchMaximum(51,51);
 
return 0;
}