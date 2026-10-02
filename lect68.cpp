#include<iostream>
using namespace std; 

template<class T>
class sparsh{
    public:
    T data;
    sparsh(T a){
        data=a;
    }
   void display();
};
template <class T>
 void sparsh<T>:: display(){
        cout<<data;
    }

void func(int a){
    cout<<"i am first func()"<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"i am tampletised func()"<<a<<endl;
}

int main(){
    sparsh<int> s(5);
    cout<<s.data<<endl;
    s.display();

    func(4);//ab konsa func run hoga template wala ya normal wala--->exact match takes the highest priority highest exact match nhi hota toh template wala run hota hai
    return 0;
}