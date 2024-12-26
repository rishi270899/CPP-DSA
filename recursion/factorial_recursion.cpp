#include<iostream>
using namespace std;
  int fact(int n)
{
    if(n==1 or n==0) return 1;
    return n * fact(n-1);
} 
int main(){
int n;
cout<<"Enter n : ";
cin>>n;
if(n<=0){
    cout<<"Please enter a positive integer "<<endl;
}

else{
cout << "factorial of " << n << " is : " << fact(n) << endl;
}
 
return 0;
}