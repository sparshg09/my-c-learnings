#include<iostream>
using namespace std; 

class student{
    protected:
    int rollnum;
    public:
    void setrollnum(int);
    void getrollnum(void);
};
void student::setrollnum(int r){
    rollnum=r;
}
void student::getrollnum(){
    cout<<"the rollnum is"<<rollnum<<endl;
}


class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float,float);
    void getmarks(void);
};
void exam:: setmarks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam:: getmarks(){
    cout<<"the marks obtained in physics are:"<<maths<<endl;
    cout<<"the marks obtained in maths are:"<<physics<<endl;
}


class result: public exam{
    float percentage;
    public:
    void displayresult(){
        getrollnum();
        getmarks();
        cout<<"your percentage is"<<(maths+physics)/2<<"%"<<endl;
    }
};

int main(){
    result sparsh;
   
    sparsh.setrollnum(327);
    sparsh.setmarks(90,80);
    sparsh.displayresult();
    
    return 0;
}