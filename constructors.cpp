#include<iostream>
using namespace std; 

class Complex{
    int a,b;
    public:
    //creating a constructor
    Complex(void);//constructor declaration

    void printnumber(){
        cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
    }
}; 
//this is default constructor
Complex :: Complex(void){  //ye function bina call kare hi run hogya kyonki iska naaam or class ka naam same tha ek object banate hii ye invoke ho jata h
    a=10;
    b=0;
    cout<<"hello world";
}


int main(){
    Complex c;
    c.printnumber();
    return 0;
}