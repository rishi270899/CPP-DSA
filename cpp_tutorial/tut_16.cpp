#include<iostream>
using namespace std;

// C++ reference using c++ reference variables 
     void swap_reference_var(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;

     }







  //  void swap(int* a, int* b){
  //   int temp = *a;
  //   *a = *b;
  //  * b = temp;

//  }
int main(){
int x = 4, y = 5;
cout<<"The value is "<<x<< " and the value is "<<y<<endl;
swap_reference_var(x,y);
cout<<"The value is "<<x<< " and the value is "<<y<<endl;
return 0;
}