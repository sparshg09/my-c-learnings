#include<iostream>
using namespace std; 

int sum(int a,int b); // ye hai function prototype ye kaha rha h agar int sum nhi bhi mile toh use dhundo wo function kahan h 
//upar wala acceptable
// int sum(int a,b); aise likhna not acceptable
//int sum(int, int); //acceptable agar humne data type mention kardiya toh wo kafi h

void g(void);
//void g(); // also acceptable aise bhi likh sakte h



int main(){
    int num1, num2;
    cout<<"enter first no."<<endl;
    cin>>num1;
    cout<<"enter the second no.";
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2); //ab ye dhundega sum kya h fir num1 ye dedega a ko and num2 ye dedega b ko ab c ki value ho jayegi return or wo sum(num1,num2) ki jagah aa jayegi(return value of function replace)
    g();
    //num1 and num2 are actual parameters
    //a,b are formal parameteres
    
    return 0;
}

int sum(int a,int b){// ye taam jhaam waise toh upar likhna tha but humne function prototype likhdiya ab hum kahin bhi likh sakte h
 int c = a+b;
  return c;
}


void g(){
    cout<<"\nhello, good morning";
}

