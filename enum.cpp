#include<iostream>
using namespace std; 

int main(){
    enum meal{bf,lunch,dinner};
    cout<<bf<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    meal m1= bf;
    cout<<bf<<endl;
    cout<<(m1==0);//true statement h to 1 output degi
    return 0;
}