#include<iostream>
using namespace std; 

class base{
    protected:
    int a;//this protected let a private but it can be inherited
    private:
    int b;

};

class derived: protected base{

};


int main(){
    base b;
    derived d;
    //cout<<b.a;//this will give error because a is protected
    //cout<<d.a;//this will give error because a inherited type is protected  
    return 0;
}