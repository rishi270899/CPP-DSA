#include<iostream>
using namespace std;
int main(){
    // int a = 5, b = 6;
      // **************Bitwise operator***********
    // cout<<"a&b : "<<(a&b)<<endl;
//     cout<<"a|b : "<<(a|b)<<endl;
//     cout<<"~a : "<<(~a)<<endl;
//     cout<<"~b : "<<(~b)<<endl;
//     cout<<"a^b : "<<(a^b)<<endl;

// //******Left shift and right shift********
// cout<< (17>>1)<<endl;
// cout<< (17>>2)<<endl;
// cout<< (19<<1)<<endl;
// cout<< (21<<2)<<endl;
// int i = 7;
// int j = 6; 
// cout<<(++i)<<endl;
// cout<<(i++)<<endl;
// cout<<(i--)<<endl;
// cout<<(--i)<<endl;

// cout<<(j++)<<endl;
// cout<<(--j)<<endl;
// cout<<(++j)<<endl;
// cout<<(j--)<<endl;

// int a,b = 1;
// a = 10;
// if(++a) cout<< b<<" world "<<a<<endl;
// else cout<< ++b <<" hello"<<endl;

// int number = 3;
// cout<< (25*(++number));

// int a = 1;
// int b = a++;
// int c = ++a;
// cout<< b<< endl;
// cout<< c<<endl;

//*****For Loop ****************
// int n ;
// cout<<"Enter the value of n : ";
// cin>>n;
// int sum = 0 ;
// for(int i = 1; i<=n;i++){

// sum += i;
   
// }
//  cout<<sum<<" ";


//*****Fabonic Series ********
// int n ;
// cout<<"Enter the value of n : ";
// cin>>n;
 
// int a = 0;
// int b = 1;
// cout<<a<<" "<<b<<" ";
// for(int i = 1; i<=n;i++){
//     int nextnumber = a+b;
   
//     cout<<nextnumber<<" ";
//     a=b;
//     b=nextnumber;
// }
 
// int n ;
// cout<<"Enter the value of n : ";
// cin>>n;
// for(int i = 2; i<n;i++){
//     if(n%2 == 0)
//      cout<<"This is not a prime number : "<<n<<endl;
//      break;
// }
   
// for(int i = 0; i<=5; i++){
//     cout<< i << " ";
//     i++;
// }

// for(int i = 0 ; i<=5; i--){
//     cout<<i<<" ";
// i++;
// }



for(int i = 0; i<=15; i +=2){
    cout<< i<< " ";
    if( i&1){
        continue;
    }
    i++;
}


// for(int i = 0; i<5; i++){
//     for(int j = i; j<=5; j++){
//         cout<<i<< " "<<j<<endl;
//     }
// }



}