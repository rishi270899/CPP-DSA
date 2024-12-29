#include<iostream>
using namespace std;
int main (){
    int a = 22545;
    cout<< sizeof(a)<<endl;//4 byte
    int b = 3;
    char name = '*';
    cout<< sizeof(name)<<endl;// 1 byte
    cout<<float(b)<<endl;
    
    bool flag;
    a==name? flag = true : flag=false;
    cout<<flag<<endl;//0
    cout<<(&a)<<endl;
    return 0;
}