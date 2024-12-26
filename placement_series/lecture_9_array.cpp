#include<iostream>
using namespace std;
// void printArray(int arr[], int size){
//     cout<< " printing the array "<<endl;
//     for(int i = 0; i<size;i++){
//         cout<< arr[i] <<" ";
//     }

// 
int getMax(int num[] , int n){

    int max = INT16_MIN;

    for(int i = 0;i<n;i++){
        if(num[i] > max){
 max = num[i];
        }
       
    }
return max;
}


int getMin(int num[] , int n){

    int min = INT16_MAX;

    for(int i = 0;i<n;i++){
        if(num[i] < min){
min = num[i];
        }
        
    }
return min;
}


int main(){
//   int number[15];
// //   cout<<"Value at 5 location : "<<number[16];
// int third[15] = {8,3};
// int n = 15;
// cout<<"printing the array ";
// for(int  i = 0;i<n; i++){
//     cout<< third[i]<< " ";
// }
// cout<<endl;
// cout<<"printing the fourth array"<<endl;


// int fourth[10] = {0};
// int m = 10;
// for(int i = 0;i<m;i++){
//     cout<<fourth[i]<<" ";
// }

// int n ;
// int third[15];
// printArray(third,15)

// char ch[5] = {'r','y','t','r','d'};
// for(int i = 0;i<5;i++){
//     cout<<ch[i]<< " ";
// }

// maximum and minimum value  

int size ;

cin>> size;

 int num[100];
 // taking input in array 

 for(int i = 0; i < size; i++){
    cin >> num[i];
 }
 
 cout<< "Maximun value is "<< getMax(num , size)<<endl;
 cout<< "Minimum value is "<<getMin(num , size)<<endl;

}