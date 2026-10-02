#include<iostream>
using namespace std; 

class base{
    public:
    int varbase=1;
    virtual void display(){
        cout<<"1.displaying base class variable varbase"<<varbase<<endl;
    }
};
//Pehle pointer apne khud ke type (base) ke function se bind hota tha. Lekin virtual lagane ke baad, wo run-time par check karta hai ki asal mein kis object ko point kar raha hai, aur usi object ka function call karta hai!

class derived: public base{

    public:
    int varderived=2;
    void display(){
        cout<<"2.displaying base class variable varbase "<<varbase<<endl;
        cout<<"2.displaying derived class variable varderived "<<varderived<<endl;
    }
};

int main(){
    base *basepointer;
    base objbase;
    derived objderived;

    basepointer=&objderived;
    basepointer->display();

    return 0;
}