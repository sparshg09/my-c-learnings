#include<iostream>
using namespace std; 

template<class T>//jahan jahan T use ho rha hai wo ek variable h or wo baadme define karenge
class Vector{
    public:
    T*arr;
    int size;
    Vector(int m){
        size=m;
        arr=new T[size];
    } 
    T dotproduct(Vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
           d +=this->arr[i]*v.arr[i];//It multiplies the element at index i of the calling vector by the element at index i of the passed vector (v), and adds that product to our running total d
        }
        return d;
    }
};
int main(){
    
    // Vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=5;
    // Vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;
    
    Vector <float>v1(3);
    v1.arr[0]=4.1;
    v1.arr[1]=3.2;
    v1.arr[2]=5.3; 
    Vector <float>v2(3);
    v2.arr[0]=1.2;
    v2.arr[1]=0.6;
    v2.arr[2]=1.3;
    float a=v1.dotproduct(v2);
    cout<<a<<endl;
    
    return 0;
}