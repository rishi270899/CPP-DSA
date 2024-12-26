#include<iostream>
using namespace std;

int main(){
    
 float d = 5.55;
 long double f = 5.55;
 cout<<"The value of d is : "<<d<<endl<<"The value of f is : "<<f<<endl; 
    cout<<"The size of 5.55 is "<<sizeof(5.55)<<endl;
    cout<<"The size of 5.55f is "<<sizeof(5.55f)<<endl;
    cout<<"The size of 5.55F is "<<sizeof(5.55F)<<endl;
    cout<<"The size of 5.55L is "<<sizeof(5.55L)<<endl;
    cout<<"The size of 5.55l is "<<sizeof(5.55l)<<endl;
    return 0;
}
