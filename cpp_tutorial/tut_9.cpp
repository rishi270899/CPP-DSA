#include<iostream>
using namespace std;
int main(){
    // cout<<"This is tutorial 9 ";
    int age ;
    cout<<"The age is : ";
    cin>>age;
    // // *****this is selection  control structure (if else-if else ladder)*******
    // if((age<18) && (age>0)){
    //     cout<<"You are not eligible to vote ";

    // }
    // else if(age==18){
    //     cout<<"Almost appear";

    // }
    // else if(age<1){
    //     cout<<"You are not born";
    // }
    // else{
    //     cout<<"You are  eligible to vote";
    // }
    // ***** Selection structure : Switch case statement *******
        switch(age) {
            case 18:
            cout<<"You are 18 yeras old"<<endl;
            break;
               case 22:
        cout<<"You are 22 yeras old"<<endl;
        break;
           case 2:
        cout<<"You are 2 yeras old"<<endl;
        break;
           case 25:
        cout<<"You are 255 yeras old"<<endl;
        break;
        }
     cout<<"Switch case is done";

    return 0;
}