#include<iostream>
using namespace std; 

int sum(int a,int b){
    cout<<"using function with 2 argument"<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"using function with 3 argument"<<endl;
    return a+b+c; 
}
// volume of cylinder
int volume(double r,int h){
    return(3.14*r*r*h);
}

//volume of cube
int volume(int a){
    return a*a*a;
}

//voulume of rectangle box
int volume(int l,int b, int h){
    return l*b*h;
}

int main(){
    cout<<"sum of 3,4"<<sum(3,4)<<endl;
    cout<<"sum of 3,4,5"<<sum(3,4,5)<<endl;
    cout<<"volume of cuboid"<<volume(3,7,6)<<endl;
    cout<<"volume of cube"<<volume(6)<<endl;
    cout<<"volume of cylinder"<<volume(6,3)<<endl;

    
    return 0;
}