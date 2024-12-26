#include<iostream>
using namespace std;

void reverse(int arr[] , int n ){
    int start = 0;
    int end = n-1;
    while (start <= end ){
        swap(arr[start], arr[end]);
        start++ ;
        end-- ;

    }
    
    
}


//print array function 
void printArray(int arr[] , int n ){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

int arr[6] = {1,4,6,8,-9,-5};
int brr[5] = {2,-8,5,7,5};

reverse(arr,6);

reverse(arr,5);

printArray(arr,6);
cout<<endl;
printArray(brr,5);


}