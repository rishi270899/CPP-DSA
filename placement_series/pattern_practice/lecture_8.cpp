#include<iostream>
using namespace std;

// int power(){
//      int a, b;
//       cin>> a >> b ;
//     int ans = 1;
//     for(int i = 1 ; i<=b; i++){
//         ans = ans * a;
        
//     }
//     return ans;
// }


// bool isEven ( int num1 ){
//     if(num1 & 1){
//         return 0;
//     }
//         else {
//              return 1;
//         }
//     }

void printCounting( int n){
    for(int i = 1; i<=n; i++){
        cout<<i<<" ";
    }
}

void printCharacter (char ch){
    
    for(int i = 1;i<=ch;i++){
        cout<<ch<<" ";
    }
}

int main() {

    int num;
    cout<<" Enter the number : ";
    cin>>num;

  printCounting(num);


  char ch;
  cout<<endl;
   cout<<" Enter the character : ";
    cin>>ch;
    printCharacter(ch);

    // int c ,d;
    // cout<<"enter the value of c : ";
    // cin>>c;
    // cout<<"Enter The power value  of "<<c<<" is : ";
    // cin>>d;
    // int ans = 1;
    // for(int i = 1 ; i<=b; i++){
    //     ans = ans * a;
    // }
    // cout<<"The Ans is : "<<ans;
    // int answere = power(c,d);
    // cout<<"The ans is : "<<answere<<endl;


    // int e ,f;
    // cout<<"enter the value of e : ";
    // cin>>e;
    // cout<<"Enter The power value  of "<<e<<" is : ";
    // cin>>f;
    //   int answeree = power(e,f);
//  

// int n ;
//  cin>>n;
  
// if(isEven(n)){
//     cout<<"the number is even ";
// }
// else{
//     cout<<"the number is odd";
// }
}