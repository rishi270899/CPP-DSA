// Write a program in C++ to store n elements in an array and print the elements using a pointer.
#include<iostream>
using namespace std;
int main(){
int a[5] = { 1,4,5,3,8};
 
 int * c = &a[5];
cout<<"address : "<<c[0];


// for( int i = 0; i<5; i++){
//     cout<<a[i]<<" ";
// }

return 0;
}