#include<iostream>
using namespace std;
int main(){
//******Pointer
int a = 5;
int* b=&a;
// Address of opreator
cout<<"the address of a : "<<&a<<endl;
cout<<"the address of a : "<<b<<endl;
// Derference of opreator
cout<<"The value of address b is "<<*b<<endl;
//Float pointer
float pi=3.14;
float* fi= &pi;
cout<<"The adrees of fi : "<<fi<<endl;
cout<<"The adrees of pi : "<<&pi<<endl;
// dereference operetor of float 
cout<<"the value of address fi : "<<*fi<<endl;

// pointer to pointer
int** c = &b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value of c is "<<**c<<endl;


return 0;
}