#include<iostream>
using namespace std; 

class Complex{
    int real,img;
    public:
    void getdata(){
        cout<<"the real part is"<<real<<endl;
        cout<<"the imaginary part is"<<img<<endl;
    }
    void setdata(int a,int b){
        real=a;
        img=b;
    }
};
int main(){
    //Complex c1;

    //*****how we can access public members of a class using pointers

    //Complex *ptr = &c1;
    Complex *ptr=new Complex;

    //(*ptr).setdata(1,33);//bracket lagana jaroori h kyonki dot operator ki precedence jada hoti h star operator se
    //same as above
    ptr->setdata(1,33);//arrow operator
    //arrow means is pointer ko dereference karo //ye jis object ko point kar rha h uska setdata() run kardo

    //(*ptr).getdata();
    //same as above
    ptr->getdata();

    //array of objects
    Complex *ptr1=new Complex[4];
    ptr1->setdata(1,33);
    ptr1->getdata();

    return 0;
}