#include<iostream>
using namespace std; 

class base{
    public:
    int varbase;
    void display(){
        cout<<"displaying base class variable varbase"<<varbase<<endl;
    }
};

class derived: public base{

    public:
    int varderived;
    void display(){
        cout<<"displaying base class variable varbase"<<varbase<<endl;
        cout<<"displaying derived class variable varderived"<<varderived<<endl;
    }
};

int main(){
    
    base *basepointer;
    base objbase;
    derived objderived;
    basepointer=&objderived;//base class ka pointer derived class ke object ko point kar rha h
    //lekin agar hum is pointer ki madad se display ko call karenge toh wo base class ka hoga bhalehi ye derivved class ke object se point horha h because ye base class ka pointer h
    //because ye pointer jis class ka hota h uske function se bind hota h

    basepointer->varbase=34;
    //basepointer->varderived=134; // will give error because we can only access jo base class se inherit hui h from pointer of base class
    basepointer->display();

    derived *derivedpointer;
    derivedpointer=&objderived;
    derivedpointer->varbase=98;
    derivedpointer->varderived=48;
    derivedpointer->display();//it will only call display function of derived class

    return 0;
}