#include<iostream>
using namespace std; 

int getMax(int arr[] , int size){
    int max = INT16_MIN;
    for(int i = 0 ; i < size; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
    
}



int getMin( int arr[] , int size ){
    int min = INT16_MAX;
    for(int i = 0 ; i < size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){

    int N[5] = {-515,-84854,-2,-1,-8};
    
    

    cout<<getMax(N , 5)<<endl;
    cout<<getMin(N , 5)<<endl;

}