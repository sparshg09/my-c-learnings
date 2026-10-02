#include<iostream>
using namespace std;
int c=54;// this is global variable

int main(){
int a,b,c;
float d=34.48f; 
long double e=34.48;


//********************** build in data types******************

cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b:"<<endl;
cin>>b;
c= a+b;
cout<<"the value of c is"<<c<<endl;
cout<<"the value of global c is"<<::c<<endl;// :: this sign shows global values
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;// aise hum ek line me hi chaining kar sakte h




//***************** float,double and long double litrals***************** 


// ab jo 34.48 h wo by default ek double hai kyounki wo ek decimal no. hai
//34.48f  ab ye ek float h by default
// agar hum 34.48l likhte toh long double 
// l and f can be in capital also
cout<<"the size of 34.48f is"<<sizeof(34.48f)<<endl;
cout<<"the size of 34.48F is"<<sizeof(34.48F)<<endl;
cout<<"the size of 34.48l is"<<sizeof(34.48l)<<endl;
cout<<"the size of 34.48L is"<<sizeof(34.48L)<<endl;
cout<<"the size of 34.48 is"<<sizeof(34.48)<<endl;// by default wala



//        *****************reference VARIABLE************
float x=666666;
cout<<x<<endl;
float & y=x;
cout<<y;




// ************type casting variable***************

int s=45;
cout<<"\n the value of s is"<<(float)s;// ab ye ek float h
cout<<"\n the value of s is"<<float(s);// dono line ek samaaan
float j=45.44;
cout<<"\n the value of j is"<<(int)j;// ab ye intiger output dega

cout<<"\n the value of expression"<<s+j ;
cout<<"\n the value of expression"<<s+int(j) ;
cout<<"\n the value of expression"<<s+(int)j ;



return 0;
}