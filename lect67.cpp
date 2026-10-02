#include<iostream>
using namespace std; 

// float funcaverage(int a,int b){
//     float avg=(a+b)/2.0;//that .0 is very important for float result
//     return avg;
// }
// float funcaverage2(int a,float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

//upar humne do alag alag function banaye agar template use karte toh ek hi banake kaam chal jaata

//multiple function ki jagah template banalo
template<class t1,class t2>
float funcaverage(t1 a,t2 b){
    float avg=(a+b)/2.0;
    return avg;
}

template<class T>
void Swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    float a;
    a=funcaverage(5,2);
    cout<<"the average of these numbers is"<<a<<endl;
    //printf can also be used for the same result as above
    printf("the average of these numbers is %.3f\n ",a);//that .3 means decimal ke baad kitni digit show karni hai

    int x=5,y=7;
    Swap(x,y);
    cout<<x<<endl<<y;

    return 0;
}