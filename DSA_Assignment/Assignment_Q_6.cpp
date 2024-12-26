#include<iostream>
using namespace std;
int main(){
    int row,colum;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of colum : ";
    cin>>colum;
    int arr[row][colum];
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cout<<"Enter the value :";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
