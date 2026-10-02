#include<iostream>
using namespace std; 

class number{
    int a;
    
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    //*************copy constructor
    number(number &obj){
        cout<<"copy constructor"<<endl;
         a=obj.a;
    }
    void display(){
        cout<<"the number for this object is "<<a<<endl;
    }


};

int main(){
    number x,y,z(45),z2;
    z.display();
    x.display();
    y.display();
    
   // z1 should exactly resemble z or or y
   number z1(x);//copy constructor invoked //z1 ke a ko pass hogyi x object ke a ki value
   z1.display();

   z2=z;//copy constructor not called kyonki z2 humne upar pehle hi bana diya
   z2.display();

   number z3=z;//copy constructor invoked kyonki humne z3 ishi line me banaya
   z3.display();

    return 0;
}