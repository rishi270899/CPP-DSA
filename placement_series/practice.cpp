#include <iostream>
using namespace std;

int main()
{
// FIND MIMIMUM AND MAXIMUM NUMBER IN THIS ARRAY 
    // int a[10] = {1, 2, -3, 42, 5, 65, 7, 8, 35, 7};

    // int max = a[0];

    // for (int i = 1; i < 10; i++)
    // {
    //     if (a[i] > max)
    //     {
    //         max = a[i];
    //     }
    // }
    // cout << "maximum value of this array is : " << max << endl;

    // int min = a[0];
    // for (int i = 1; i < 10; i++)
    // {
    //     if (min > a[i])
    //     {
    //         min = a[i];
    //     }
    // }
    // cout << "minimum value of this array is : " << min;



    int a[5] = {1,3,5,6,7};

    int keyword ;
    cout<<"Enter the keyword : ";
    cin>>keyword;

    for(int i = 0; i <5; i++){
        if(keyword == a[i]){
            keyword = i;
              
              

                
        }
    } 
  cout<<keyword;

   
       

    
    


}