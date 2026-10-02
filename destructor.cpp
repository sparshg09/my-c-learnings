#include<iostream>
using namespace std; 

int Count=0;//global variable banaya use 0 se initialise kara

class num{
    
    public:
    num(){
        Count++;
        cout<<"this is time when constructor is called for object no."<<Count<<endl;
    }
    //destructor
    ~num(){
        cout<<"this is when destructor is called for object number"<<Count<<endl;
        Count--;
    }
};

int main(){
    cout<<"we are inside main function"<<endl;
    cout<<"creating first oject n1"<<endl;
    num n1;
    //block banaya(block ke andar jo cheeje banti h wo jaise hi block exit hota h destroy ho jaati h or wo destroy karne ke lie destructor call hota h)
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
    // return 0 means main function ends means n1's scope ends so destructor is called to destroy n1
}