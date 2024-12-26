#include<iostream>
using namespace std;
// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
int main(){
int n , first,second, third,fourth,fifth;
cout<<"Enter five digit number :";
cin>>n;
first = n/10000;
cout<<"First digit is : "<<first<<endl;
n = n % 10000;
second = n/1000;
cout<<"second digit is : "<<second<<endl;
n = n % 1000;
third = n / 100;
cout<<"third digit is : "<<third<<endl;
n = n%100;
fourth = n/10;
cout<<"fourth digit is : "<<fourth<<endl;
int sum = first+fourth;
cout<<"the sum of first and second last digit is "<<sum;
return 0;
}