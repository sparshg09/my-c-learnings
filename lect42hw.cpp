#include<iostream>
using namespace std; 

// galat h ye code
//solution in lect47

class sical{
    int a,b;
    public:
    void getnum(int x,int y){
        x=a;
        y=b;
    }
    int add(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int multiply(){
        return a*b;
    }
    int devide(){
        return a/b;
    }
};

class sccal{
    int s,t;
    public:
    void getdata(int u,int v){
        u=s;
        v=t;
    }
    void getdata(int z){
        z=s;
    }
    int expo(){
        return pow(s,t);
    }
    int squareroot(){
        return sqrt(s);
    }
};

class hybirdcalc: public sical,public sccal
{
public:
void getresult(){
cout<<"the answer is"<<endl;
}

};

int main(){
    hybirdcalc equals;
    
    equals.getnum(16,4);
    equals.getdata(8,2);
    equals.getdata(3);
    
    equals.getresult();

    return 0;
}