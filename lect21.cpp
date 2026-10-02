#include<iostream>
using namespace std; 

class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);//declaration
    void getdata(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
        cout<<"the value of d is"<<d<<endl;
        cout<<"the value of e is"<<e<<endl;
    }
};
//function class ke bahar define karne ka syntax // chahate to andar bhi kar sakte the class ke jaise void get data kiya hai
void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}


int main(){
    employee sparsh;//ye humne sparsh naam ka ek object banaya employee class me
    sparsh.d=34;
    sparsh.e=65;
    //sparsh.a=134;//this will give an error because a is private // isliye setdata naam ka ek function banane ki jarurat padi
    sparsh.setdata(1,2,4);//you can not directly accesss private data you have to use function
    sparsh.getdata();

    return 0;
}