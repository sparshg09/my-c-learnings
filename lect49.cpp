#include<iostream>
using namespace std; 

class test{
    int a;
    int b;
    public:
    //test(int i,int j):a(i),b(j)
    //test(int i,int j):a(i),b(i+j)
    //test(int i,int j):a(i),b(2*j)
    //test(int i,int j):a(i),b(a+j)//ek initialised variable ko use kar rahe hai dusre variable ko initialise karne ke lie
    
    //test(int i,int j):b(j),a(i+b)//humne upar pehle a ko likha h toh a will be initialised first which cant get value of b  so this will give garbage value

    test(int i,int j)
    {
        a=i;//ye upar commented wali line me nhi hai
        b=j;//ye upar commented wali line me nhi hai
        cout<<"constructor executed"<<endl;
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
    }
};

int main(){
    test t(4,6);

    return 0;
}