#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i= 1;i<=n;i=i+2){
        for(int j = 1; j <=i;j=j+2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}