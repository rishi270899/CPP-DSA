#include<iostream>
using namespace std;
  void character(char c, int n){
    int i = 1;
    while(i<=n){
        cout<<c;
        i++;
    }
  }
 
int main(){

character('*',20);
character('&',20);

 
 
return 0;
}