#include<iostream>
using namespace std; 

//syntax for multiple inheritance
/*class derived : visibilitymode base1,visibiltymode base2,_____and so on
{
class body of class "derived class"
};*/

class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int a){
        base1int=a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void setbase2int(int a){
        base2int=a;
    }
};

class derived : public base1, public base2
{
    public:
    void show(){
        cout<<"the value of base1 is"<<base1int<<endl;
        cout<<"the value of base2 is"<<base2int<<endl;
        cout<<"the sum of these value is"<<base1int + base2int<<endl;
    }
};
//the inherited derived class will look like this
/*data members:
base1int----protected
base2int----protected
member functions:
setbase1int()---public
setbase2int()---public
setshow()---public*/

int main(){
    derived sparsh;

    sparsh.setbase1int(25);
    sparsh.setbase2int(5);
    sparsh.show();

    return 0;
}