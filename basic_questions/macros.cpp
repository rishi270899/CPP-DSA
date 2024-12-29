#include<iostream>
# define N 10 
using namespace std;
int main(){
    int a[N], i;
    for(i = 0 ; i<N; i++){
        cout<<"Enter the Input for index : "<<i<<" : ";
        cin>>a[i];
            }
            cout<<"Array element are as follows : ";
            for(i = 0 ; i<N; i++){
                cout<<a[i]<<endl;

            }
}