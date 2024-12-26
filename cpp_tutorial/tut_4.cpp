#include<iostream>
using namespace std;
int glo = 6;
void variable(){
   int glo= 65;
   cout<<glo<<endl;
}

int main(){
    int glo = 9;
    glo = 78;
    variable();
    cout<<glo;
    
    return 0;
}