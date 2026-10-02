#include<iostream>
using namespace std; 

class base1{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"kaise ho"<<endl;
    }
};
class derived: public base1, public base2{
    int a;
    public:
    //how to solve ambiguoty
    void greet(){
        base1::greet();//ab derived base1 ke greet ko call karega
    }
};


class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};
class D : public B{
    public:
    void say(){
        cout<<"namaste duniya"<<endl;
    }
};


int main(){
    
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    derived d;
    d.greet();


    B b;
    D da;
    b.say();
    da.say(); //agar class D me koi say() nhi hota toh wo same class B wala say() inherited tha lekin class D me jo say() h usne class B se inherited wale say() ko overwrite kardiya

    return 0;
}