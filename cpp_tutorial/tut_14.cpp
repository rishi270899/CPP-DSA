#include<iostream>
using namespace std;
// ******structure*****
//************* typedef mean short form of name ********
//  typedef struct employee
// {
//     int eid;
//     float salary;
//     char favchar;
// }ris ;

// **********Union *********

//  union money
//  {
//     int rice;
//     float pounds;
//     char car;
// };
int main(){
    //*****Enum***
   enum meal{ breakfast , lunch , dinner};
   meal m1 = lunch;
   cout<<(m1==2);
//    cout<<breakfast<<endl;
//    cout<<lunch<<endl;
//    cout<<dinner<<endl;



    //******union*******
// union money m1;
// m1.rice = 34;
// m1.pounds = 2.5;
// m1.car = 'c';


// cout<<m1.car<<endl;
// cout<<m1.pounds<<endl;
// cout<<m1.rice<<endl;

//     struct employee anish;
//     struct employee pooja;
// ris rishi;
// rishi.eid = 620145;
// rishi.salary = 1200.00;
// rishi.favchar = 'r';
// cout<<" The value : "<<rishi.eid<<endl;
// cout<<" The value : "<<rishi.salary<<endl;
// cout<<" The value : "<<rishi.favchar<<endl;


return 0;
}