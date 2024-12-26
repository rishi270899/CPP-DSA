#include<iostream>
using namespace std;
  
 
int main(){
// int a = 3;
// int b = 6;

// int* a1 = &a;
// int* b1 = &b;

// cout<<*a1 * *b1<<endl;

float a = 4.2;
float b = 5.1;

cout<<a<<"  "<<b<<endl;

float* a1 = &a;
float* b1 = &b;

cout<<*a1 * *b1<<endl; // *a1 -> This is called dereference operetor 

cout<<a1<<"  "<<b1<<endl;

*a1 = 5.98;
*b1 = 53.1;
cout<<a<<"  "<<b<<endl;

return 0;
}