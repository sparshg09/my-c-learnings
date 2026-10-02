#include<iostream>
using namespace std; 

class Complex{
    int a,b;
    public:
    //creating a constructor
    Complex(int,int);//constructor declaration

    void printnumber(){
        cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
    }
}; 
//this is parameterised constructor
Complex :: Complex(int x,int y){  
    a=x;
    b=y;
  
}


int main(){
    //implicit call
    Complex a(4,6);
    //explicit call
    Complex b=Complex(5,7);
     

    
    
    a.printnumber();
    b.printnumber();
    return 0;
}