#include<iostream>
using namespace std;
int main(){
      
  float b = 65.65;
  int a = 45;
//   cout<<"The value of b is : "<<int(b)<<endl;
//   cout<<"The value of a is : "<<int(a);
     int c = int(b);
     cout<<c<<endl;
     cout<<b<<endl;
   

   cout<<"The expression is : "<<a+b<<endl;
   cout<<"The expression is : "<<a+ int(b)<<endl;
   cout<<"The expression is : "<<a+ (int)b;
    return 0;
}