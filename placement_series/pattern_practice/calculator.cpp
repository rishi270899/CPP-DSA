#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the Integer value of a : ";
    cin>>a;
    cout<<"Enter the Integer value of b : ";
    cin>>b;

    char op;
    cout<<"Enter the any operation you want : ";
    cin>>op;

    switch (op)
    {
    case '+': cout<<a+b;
             break;
    case '-': cout<<a-b;
             break;
    case '*': cout<<a*b;
             break;
    case '/': cout<<a/b;
             break;
    case '%': cout<<a%b;
             break;
  
    
    default : cout<<"Please enter enter the valid operation ";
        break;
    }


}