#include<iostream>
using namespace std;
//print two matrix
int main(){
    int row1,colum1;
    cout<<"Enter size of row1 : ";
    cin>>row1;
    cout<<"Enter size of colum1 :";
    cin>>colum1;
  int  arr1[row1][colum1];
    for(int i =0;i<row1;i++){
for(int j = 0;j<colum1;j++){
    cout<<"Enter the value :";
    cin>>arr1[i][j];

}
    }
     for(int i =0;i<row1;i++){
for(int j = 0;j<colum1;j++){
    cout<<arr1[i][j]<<" ";

}cout<<endl;
    }
    int row2,colum2;
     cout<<"Enter size of row2 : ";
    cin>>row2;
    cout<<"Enter size of colum2 :";
    cin>>colum2;
  int  arr2[row2][colum2];
    for(int i =0;i<row2;i++){
for(int j = 0;j<colum2;j++){
    cout<<"Enter the value :";
    cin>>arr2[i][j];

}
    }
     for(int i =0;i<row2;i++){
for(int j = 0;j<colum2;j++){
    cout<<arr2[i][j]<<" ";

}cout<<endl;
    }
    
    
    return 0;
}