#include<iostream>
using namespace std;
int main(){
 /* Loop in C++ - Three types
 1. For Loop
 2. While loop
 3. Do while Loop
 */
 // *****For Loop***** 
 // Syntax of For Loop
 // for( intialization; condtion; updation){
    // loop body( c++ code);
 //}
//  for( int i = 0; i<40; i++)
//  {
//     cout<<i<<endl;
    
//  }
// ******Infinite for loop
// for( int i = 1; 34<=40; i++)
// {
//     cout<<i<<endl;
// }


// *********While Loop********
// Syntax:
/*
while(condition)
{
    c++ statement;
}
*/
// printing 1 to 40 using while loop
// int i= 3;
// while(i<=40){
//     cout<<i<<endl;
//     i++;
// }


 //******infinte while loop*********
// int i =1;
// while(true){
//   cout<<i<<endl;
//   i++;
// }


// *******Do while loop********
/*
syntax:
do 
{
  c++ statement;
}while(condition)
printing 1 to 40 using do while loop
*/

// int i = 1;
// do{
//   cout<<i<<endl;
//   i++;

// }while(false);
// Table create using loop
int i;
int n;
cout<<"Enter the table number :";
cin>>n;
for(i=n; i<=(n*10);i = i+n){
  cout<<"The tABLE : "<<i<<endl;
}



  return 0;
}
