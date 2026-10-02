#include<iostream>
using namespace std; 

class student{
    protected:
    int rollnum;
    public:
    void setnum(int a){
        rollnum=a;
    }
    void printnum(void){
        cout<<"your roll num is"<<rollnum<<endl;
    }
};

class test: virtual public student{
    protected:
    float maths,physics;
    public:
    void setmarks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void printmarks(void){
        cout<<"your result is here"<<endl
            <<"maths: "<<maths<<endl
            <<"physics: "<<physics<<endl;
    }
};

class sports: public virtual student{
    protected:
    float score;
    public:
    void setscore(float sc){
        score=sc;
    }
    void printscore(void){
        cout<<"your pt score is"<<score<<endl;
    }
};

class result: public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        printnum();
        printmarks();
        printscore();
        cout<<"your total score is"<<total<<endl;
    }
};


int main(){
    result sparsh;

    sparsh.setnum(327);
    sparsh.setmarks(90,97);
    sparsh.setscore(100);
    sparsh.display();
    
    return 0;
}