#include<iostream>
using namespace std; 

class A{
    int a;
    public:
    //A& setdata(int a){ //need to change return type to A& if we want to use method chaining
    void setdata(int a){
        //a=a;//will give garbage value because khali local variable access hua this line just assign local parameter to itself
        this->a=a;
        //return *this;//used for method chaining
    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    }
};

int main(){
    A sparsh;
    
    //a.setdata(4).getdata(); //method chaining
    
    sparsh.setdata(4);
    sparsh.getdata();
    
    return 0;
}