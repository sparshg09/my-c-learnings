#include<iostream>
using namespace std; 

template<class t1=int ,class t2=float ,class t3=char >//ab agar hum koi parameter nhi denge toh ye default wale use ho jayenge or agar denge to ye overwrite ho jayenge
class sparsh{
    public:
    t1 a;
    t2 b;
    t3 c;
    sparsh(t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
    }

};

int main(){
    sparsh<> s(4,6.4,'d');//humne koi parameter nhi diya template ko
    s.display();
    cout<<endl;

    sparsh<float,char,char> g(1.4,'t','d');
    g.display();
    
    return 0;
}