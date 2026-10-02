#include<iostream>
using namespace std; 

int factorial(int n){
    if(n<=1){
        return 1;
    }

  return n* factorial(n-1);   //function khudko call kar rha h
}
int fib(int i){
    if(i<=2){
        return 1;
    }

  return fib(i-2) + fib(i-1);
}


int main(){
    int a,b;
    cout<<"enter a no."<<endl;
    cin>>a;
    cout<<"the factorial of" <<a<< " is"<<factorial(a)<<endl;
    cin>>b;
    cout<<"the term in fibonacci sequence at position"<<b<<"is"<<fib(b)<<endl;
    return 0;
}