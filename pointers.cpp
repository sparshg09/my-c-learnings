#include<iostream>
using namespace std; 

int main(){
    int a=3;
    int* b= &a;
    cout<<"the address of a is"<<b<<endl;
    cout<<"the address of a is"<<&a;

    //dereference operator
    cout<<"\nthe value at address b is "<<*b<<endl;

    int** c=&b;
    cout<<"the adress of b is"<<c<<endl;
    cout<<"the value at address of c is"<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) of c "<<**c<<endl;


    return 0;
}