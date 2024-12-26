#include<iostream>
using namespace std;
//********funtion prototype*******

// type funtion- name (argumnets);
int sum(int  a, int b  );// this is acceptable 

// int sum(int, int );// this is acceptable 

// int sum( int a,b ); --> this is not acepatable

// void g();

int main(){
int num1,num2;
cout<<"Enter the first number "<<endl;
cin>>num1;
cout<<"Enter the first number "<<endl;
cin>>num2;
cout<<"The sum value :"<<sum(num1,num2);

return 0;
}
int sum(int  a, int b  ){
    // a and b will be taking value from actual parameters um1 and num2;
    int c = a+b;
    return c;
}

// void g(){
//     cout<"\n hello good moring ";
// }